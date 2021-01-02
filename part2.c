#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <stdbool.h>
#include "part2.h"

/* ****** Functions Declarations ****** */
void push(scope *sp);
void pop();
scope* peak();
void FreeMemory();
void clearMemory();
void addProcFunc(char *name, char *type);
void addVar(char *varName);
void setVarType(char *type);
void setScope(char *name, char *type, char *typeReturn); 
void addArgVar(char *argVar);
void addArgVar(char *argVar);
void setArgsType(char *type);
void setRetType(char *returnType);
bool checkVarAppearance(char *name, declaration **holder, int size);
bool checkFuncProcAppearance(scope *sp, char *name);
void printStack();
void addError(char *err);
void printErrors();
void checkMainArgs(scope *main);


/* ****** Global Variables Declarations ****** */
global *globalScope = NULL;
int globalScopeSize = 0;
stack *scopesStack = NULL;
bool isMain = false;

declaration **declarations = NULL;
declaration **arguments = NULL;

funcProcCall *funcProcCalls = NULL;

error **errors = NULL;
int errorSize = 0;

int declarationSize = 0;
int argumentSize = 0;
char *retType = NULL;

void printErrors() {
	printf("================================================printerro\n");
	if(errorSize > 0){
		for(int i = errorSize - 1; i >= 0; i--){
			printf("%s\n", errors[i]->errorMessage);
		}
	}
}

void checkMain() {
	printf("check main\n");
	if(!isMain){
		addError("Error: Main procedure have to exist once!");
	}
}


//add error message to the error array
void addError(char *err){
	errorSize++;
	if(errorSize - 1 > 0){
		errors = (error**)realloc(errors, errorSize);
	} else {
		errors = (error**)malloc(sizeof(error*));
	}
	errors[errorSize - 1] = (error*)malloc(sizeof(error));
	errors[errorSize - 1]->errorMessage = (char*)malloc(sizeof(err) + 100000000000000000000000000000000000000);
	strcpy(errors[errorSize - 1]->errorMessage, err);
}

//printf the global scope
void printGlobal(){
	printf("number of scopes in global is: %d\n", globalScopeSize);
	if(globalScope){
		for(int i = globalScopeSize - 1; i >= 0; i--){
			printf("scope name: %s\n", globalScope->scopes[i]->name);
			if(globalScope->scopes[i]->scopesSize > 0){
				printf("inside scopes size: %d\n", globalScope->scopes[i]->scopesSize);
				for(int j = globalScope->scopes[i]->scopesSize - 1; j >= 0; j--){
					printf("inside scope add: %s\n", globalScope->scopes[i]->scopes[j]->name);
				}
			}
		}
	}
}

//push new scope to the stack
void pushNewScope(){
	printf("push new scope\n");
	scope *newScope = (scope*)malloc(sizeof(scope));
	newScope->argumentSize = 0;
	printf("SIZE %d\n", newScope->argumentSize);
	push(newScope);
	printf("end push new scope\n");
}

//push the end sign to the stack
void pushEndSign(char *sign) {
	scope *endSign = (scope*)malloc(sizeof(scope));
	endSign->name = (char*)malloc(sizeof(sign + 1));
	strcpy(endSign->name, sign);
	push(endSign);
	printf("end sign push\n");
}

//add new scope to the global scopes array
void addToGlobal(scope *sp){
	printf("AA\n");
	globalScopeSize++;
	if(globalScopeSize - 1 > 0){
		printf("AA1\n");
		globalScope->scopes = (scope**)realloc(globalScope->scopes, globalScopeSize);
	} else {
		globalScope = (global*)malloc(sizeof(global));
		globalScope->scopes = (scope**)malloc(sizeof(global*));
		printf("AA2\n");
	}
	globalScope->scopes[globalScopeSize - 1] = sp;
	printf("BB\n");
}

//add son scope to the list of scopes of the parent scope
void addScopeToArrayOfScopes(scope *current, scope *inside) {	
	printf("1\n");
	current->scopesSize++;
	// if(strcmp(current->name, inside->name) == 0){
	// 	printf("=++++++ \n");
	// 	addError("Error: procedure/function name already exist!");
	// }
	printf("888888888888\n");
	if(current->scopesSize - 1 > 0){
		printf("=+44 \n");
		current->scopes = (scope**)realloc(current->scopes, current->scopesSize);
		printf("add scope to array of scopes 1\n");
	} else {
		printf("=+55 \n");
		current->scopes = (scope**)malloc(sizeof(scope*));
		printf("add scope to array of scopes 2\n");
	}
	current->scopes[current->scopesSize - 1] = inside;
	int counter = 0;
	// for(int i = current->scopesSize - 1; i >= 0; i--){
	// 	printf("=++++++ =======\n");
	// 	printf("current name: %s\n", current->scopes[i]->name);
	// 	printf("inside name: %s\n", inside->name);

	// 	if(current->scopes[i]->name && strcmp(current->scopes[i]->name, inside->name) == 0){
	// 		printf("99999999999999\n");
	// 		counter++;
	// 	}
	// }
	if(counter > 1){
		addError("Error: procedure/function name already exist!");
	}
	printf("inside scope add: %p\n" ,current->scopes[current->scopesSize - 1]);
	printf("2\n");
}


void push(scope *sp) {
	printf("PUSH address %p\n", sp);
	if(scopesStack && scopesStack->currentScope){
		//there is an element in the scope
		//check if the element is the endSign element -- $$
		printf("peak1\n");
		scope *temp = peak();
		if(temp->name && strcmp(temp->name, "$$") == 0) { // case the current scope is the endSign
			//add scope *sp to the Global scope array
			addToGlobal(sp);
		} else { // here the scope that we want to push to stack we want also add to the array of scopes of the current scope
			printf("45555555555555555566666666  %s\n", sp->name);
			addScopeToArrayOfScopes(temp, sp);
		}
		sp->nextScope = scopesStack->currentScope;
		scopesStack->currentScope = sp;
		printf("CC\n");
	} else {
		printf("push to empty stack\n");
		scopesStack = (stack*)malloc(sizeof(stack));
		scopesStack->currentScope = sp;
	}
	printf("push");
	printStack();
}

void pop(){
	if(!scopesStack->currentScope->nextScope){
		printf("************************************* next scope is null\n");
	}
	scopesStack->currentScope = scopesStack->currentScope->nextScope;
	// scope *tempScope = scopesStack->currentScope;
	// printf("scope %s pop\n", tempScope->name);
	// scopesStack->currentScope = tempScope->nextScope;
	// tempScope->nextScope = NULL;
	printf("pop\n");
	printStack();
}

scope* peak(){
	printf("PEAK\n");
	printStack();
	if(scopesStack->currentScope == NULL){
		printf("current scope null\n");
	}
	if(scopesStack == NULL){
		printf("scope stack null\n");
	}
	if(scopesStack && scopesStack->currentScope){
		return scopesStack->currentScope;
	}
	return NULL;
}

void FreeMemory(){	
	for(int i = argumentSize - 1; i >= 0; i--){
		free(arguments[i]->type);
		free(arguments[i]);
	}
	for(int i = declarationSize - 1; i >= 0; i--){
		free(declarations[i]->type);
		free(declarations[i]);
	}
	if(retType){
		free(retType);
	}
	free(arguments);
	free(declarations);
	//ADD FREE MEMORY funcProcCalls

}

void clearMemory(){
	arguments = NULL;
	declarations = NULL;
	retType = NULL;
	funcProcCalls = NULL;
	declarationSize = 0;
	argumentSize = 0;
}


void setScope(char *name, char *type, char *typeReturn) {
	// if(checkFuncProcAppearance(name, type)){
	// 	printf("Error: %s name '%s' already exist!\n", type, varName);
	// 	exit(EXIT_FAILURE);
	// 	FreeMemory();
	// }
	printf("set Scope\n");
	printf("Name is: %s\n", name);
	printf("peak2\n");
	scope *newScope = peak();
	printf("scope address %p\n", newScope);
	newScope->argumentSize = 0;
		printf("2222222222222222222222\n");
	printf("size is: %d\n", newScope->argumentSize);
	if(newScope->argumentSize > 0){
	}
	if(strcmp(name, "Main") == 0 ){
		if(isMain){
			//error message
			addError("Error: Main procedure can only appear once!");
		} else{
			isMain = true;
		} if(newScope->argumentSize > 0){
			addError("Error: Main procedure dont has arguments!");
		}
	}
	printf("check ========= %s\n", name);

	// if(checkFuncProcAppearance(newScope, name)){
	// 	//strcat
	// 	addError("Error: there is function/procedure with name that already exist!");
	// }
	newScope->nextScope = NULL;
	newScope->name = (char*)malloc(sizeof(name) + 1);
	strcpy(newScope->name,name);
	printf("1\n");

	newScope->type = (char*)malloc(sizeof(type) + 1);
	printf("2\n");
	strcpy(newScope->type, type);
	printf("3	\n");
	if(typeReturn){
		newScope->returnType = (char*)malloc(sizeof(typeReturn) + 1);
		printf("4\n");
		strcpy(newScope->returnType, typeReturn);
	} else { // need to check the else part because of setType (types in GRAMMER)
		newScope->returnType = retType;
		printf("5 ==> %s\n", newScope->returnType);
	}
	// newScope->argumentSize = argumentSize;

	// newScope->declarationSize = declarationSize;

	//initiliaze two dynamic matrixes of all scope arguments, and all scope declarations.
	// newScope->arguments = arguments;
	// newScope->declarations = declarations;
	printf("address from setScop: %p\n", newScope);
	pop();
	// clearMemory();
}


void addProcFunc(char *name, char *type){
	printf("peak3\n");
	scope *temp = peak();
	printf("ADD PROC FUNC name: %s \n", name);
	// if(temp && checkFuncProcAppearance(name, type, temp->declarations, temp->declarationSize)){
	// 	printf("Error: %s name '%s' already exist in the same scope!\n", type, name);
	// 	exit(EXIT_FAILURE);
	// 	FreeMemory();
	// }
	declaration *newDeclare = (declaration*)malloc(sizeof(declaration));
	newDeclare->name = (char*)malloc(sizeof(name) + 1);
	strcpy(newDeclare->name, name);
	newDeclare->type = (char*)malloc(sizeof(type) + 1);
	strcpy(newDeclare->type, type);
	if(argumentSize > 0){
		declarationSize++;
		declarations = (declaration**)realloc(declarations, declarationSize); //reallocate memory for the new declaration
	} else{
		declarations = (declaration**)malloc(sizeof(declaration*));
		declarationSize++;
	}
	declarations[declarationSize - 1] = newDeclare;
}

void addVar(char *varName){
	if(checkVarAppearance(varName, declarations, declarationSize)){
		printf("Error: variable name '%s' already exist in the same scope!\n", varName);
		FreeMemory();
		exit(EXIT_FAILURE);
	}
	declaration *newDeclare = (declaration*)malloc(sizeof(declaration));
	newDeclare->name = (char*)malloc(sizeof(varName) + 1);
	strcpy(newDeclare->name, varName);
	if(declarationSize > 0){
		declarationSize++;
		declarations = (declaration**)realloc(declarations, declarationSize); //reallocate memory for the new declaration
	} else{
		declarations = (declaration**)malloc(sizeof(declaration*));
		declarationSize++;
	}
	declarations[declarationSize - 1] = newDeclare;
}

void setVarType(char *type){
	for(int i = declarationSize - 1; i >= 0; i--){
		if(declarations[i]->name && !declarations[i]->type){
			declarations[i]->type = (char*)malloc(sizeof(type) + 1);
			strcpy(declarations[i]->type, type);
		}
	}
}

void addArgVar(char *argVar){
	// if(checkVarAppearance(argVar, arguments, argumentSize)){
	// 	printf("Error: variable name '%s' already exist in the same scope!\n", argVar);
	// 	exit(EXIT_FAILURE);
	// 	FreeMemory();
	// }
	printf("peak4\n");
	scope *temp = peak();
	declaration *newArgument = (declaration*)malloc(sizeof(declaration));
	newArgument->name = (char*)malloc(sizeof(argVar) + 1);
	strcpy(newArgument->name, argVar);
	temp->argumentSize++;
	if(temp->argumentSize - 1 > 0){
		temp->arguments = (declaration**)realloc(arguments, temp->arguments); //reallocate memory for the new declaration
	} else{
		temp->arguments = (declaration**)malloc(sizeof(declaration*));
	}
	temp->arguments[temp->argumentSize - 1] = newArgument;
	printf("argumnt size is: %d\n", temp->argumentSize);
	printf("argumnt is: %s\n", temp->arguments[temp->argumentSize - 1]->name);
}

void setArgsType(char *type){
	printf("peak5\n");
	scope *temp = peak();
	for(int i = temp->argumentSize - 1; i >= 0; i--){
		if(temp->arguments[i]->name && !temp->arguments[i]->type){
			temp->arguments[i]->type = (char*)malloc(sizeof(type) + 1);
			strcpy(temp->arguments[i]->type, type);
		}
	}
	printf("argumnt type is: %s\n", temp->arguments[temp->argumentSize - 1]->type);
}

void setRetType(char *returnType){
	retType = (char*)malloc(sizeof(returnType) + 1);
	strcpy(retType, returnType);
}

bool checkVarAppearance(char *name, declaration **holder, int size){
	for(int i = size - 1; i >= 0; i--){
		if(strcmp(holder[i]->name, name) == 0){
			return true;
		}
	}
	return false;
}

bool checkFuncProcAppearance(scope *sp, char *name){
	printf("check ----------------------------------- %s\n", name);
	for(int i = sp->scopesSize - 1; i >= 0; i--){
		printf("inside scope name: %s; name: %s\n", sp->scopes[i]->name, name);
		if(strcmp(sp->scopes[i]->name, name) == 0){
			return true;
		}
	}
	return false;
}

void addFuncProcCallArgs(char *argNameType){
	printf("add argument to function call with name: %s\n", argNameType);
	printf("add func proc 1\n");
	declaration *newFuncProcArg = (declaration*)malloc(sizeof(declaration));
	newFuncProcArg->name = (char*)malloc(sizeof(argNameType) + 1);
	strcpy(newFuncProcArg->name, argNameType);
	if(!funcProcCalls){
		funcProcCalls = (funcProcCall*)malloc(sizeof(funcProcCalls));
	}
	printf("add func proc 2\n");
	if(funcProcCalls->argsSize > 0){
		funcProcCalls->argsSize++;
		funcProcCalls->args = (declaration**)realloc(funcProcCalls->args, funcProcCalls->argsSize);
	} else{
		funcProcCalls->args = (declaration**)malloc(sizeof(declaration*));
		funcProcCalls->argsSize++;
	}
	printf("add func proc 3\n");
	funcProcCalls->args[funcProcCalls->argsSize - 1] = newFuncProcArg;
}

// bool checkFuncProcCallAppearance(char *funcProcName){
// 	scope *curScope = peak();
// 	/*
// 		[ ] - check if the function is appear in the scope.
// 			[ ] - if numnber of arguments are 0 
// 			[ ] - if number of arguments are not 0
// 				[ ] - check if the types are equal.
// 	*/

// 	//check if the function is not appear in the scope
// 	int flag = 0;
// 	char *err;
// 	printf("check proc func appearance 1\n");
// 	if(!(strcmp(curScope->name, funcProcName) == 0 && (strcmp(curScope->type, "function") ||
// 		strcmp(curScope->type, "procedure")))){
// 		errors = (error*)malloc(sizeof(error));
// 		err = "is not appear in the scope!";
// 		errors[errorSize - 1]->errorMessage = (char*)malloc(sizeof(err) + 1);
// 		strcpy(errors->errorMessage, err);
// 		return false;		
// 	}
// 	//case function is appear in the scope
// 	//and function call with 0 arguments and function declare with 0 arguments
// 	if(curScope->argumentSize == 0 && funcProcCalls->argsSize == 0){
// 		return true;
// 	}
// 	//case function is appear in the scope
// 	//and function call has no the same arguments number as the function declaretion
// 	printf("printing the arguments of the scope:\n");
// 	for(int i = curScope->argumentSize - 1; i >= 0; i--){
// 		printf("%s\n", curScope->arguments[i]->name);
// 	}

// 	if(curScope->argumentSize != funcProcCalls->argsSize){
// 		errors = (error*)malloc(sizeof(error));
// 		err = ",call function has not the same amount of arguments";
// 		errors->errorMessage = (char*)malloc(sizeof(err) + 1);
// 		strcpy(errors->errorMessage, err);
// 		printf("check proc func appearance 2\n");
// 		return false;
// 	}
// 	//case function appear in the scope
// 	//and function call and function declaration has the same number of arguments
// 	//need to check if the arguments are the same type
// 	//case function call parameteres are varibles
// 	for(int i = funcProcCalls->argsSize - 1; i >= 0; i--){
// 		for(int j = declarationSize - 1; j >= 0; i--){
// 			if(strcmp(funcProcCalls->args[i]->name, declarations[j]->name) == 0){
// 				if(strcmp(declarations[j]->type, curScope->arguments[i]->type) != 0){
// 					//case the function call has an varialbe and the variable is recognize in the scope 
// 					// but it is not with the same type
// 					return false;
// 				}
// 			}
// 		}
// 	}

// 	//check if the arguments from function call is the same in the declare of the function
// 	for(int i = funcProcCalls->argsSize - 1; i >= 0; i--){
// 		if(strcmp(funcProcCalls->args[i]->name, curScope->arguments[i]->name) != 0){
// 			return false;
// 		}
// 	}
// 	return true;
// }

// void addProcFuncCall(char *funcProcName){
// 	printf("add proc func call 1\n");
// 	if(!funcProcCalls || !checkFuncProcCallAppearance(funcProcName)){
// 		printf("add proc func call 2\n");
// 		printf("Error: function/procedure name '%s' %s\n", funcProcName, errors->errorMessage);
// 		FreeMemory();
// 		exit(EXIT_FAILURE);
// 	}
// 	funcProcCalls->name = (char*)malloc(sizeof(funcProcName) + 1);
// 	strcpy(funcProcCalls->name, funcProcName);

// 	clearMemory();
// }

void printStack(){

	printf("\n======================================================\n\n");
	printf("peak6\n");
	scope *temp = peak();
	while(temp){
		if(temp->name)
		{
			printf("%s\n", temp->name);

		}
		// printf("%s\n", temp->type);
		// printf("%s\n", temp->returnType);
		// printf("declarationSize = %d\n", temp->declarationSize);
		// printf("argumentSize = %d\n", temp->argumentSize);
		// for(int i = temp->declarationSize - 1; i >= 0; i--){
		// 	if(temp->declarations[i]->type){
		// 		printf("%s\n",temp->declarations[i]->type);
		// 		printf("%s\n", temp->declarations[i]->name);
		// 	}
		// }
		// for(int i = temp->argumentSize - 1; i >= 0; i--){
		// 	printf("%s\n", temp->arguments[i]->type);
		// 	printf("%s\n", temp->arguments[i]->name);
		// }
		// printf("\n\n");
		temp = temp->nextScope;
		printf("\n======================================================\n\n");
	}
	// FreeMemory();
}