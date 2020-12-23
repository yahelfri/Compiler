#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <stdbool.h>
#include "part2.h"

/* ****** Functions Declarations ****** */
bool checkVarAppearance(char *name, declaration **holder, int size);
bool checkFuncProcAppearance(char *name,  char *type, declaration **holder, int size);
void push(scope *sp);
scope* pop();
scope* peak();
void FreeMemory();
void clearMemory();
void addProcFunc(char *name, char *type);
void addVar(char *varName);
void setVarType(char *type);
void createScope(char *name, char *type, char *typeReturn); 
void addArgVar(char *argVar);
void addArgVar(char *argVar);
void setArgsType(char *type);
void setRetType(char *returnType);
bool checkVarAppearance(char *name, declaration **holder, int size);
bool checkFuncProcAppearance(char *name,  char *type, declaration **holder, int size);
void printStack();


/* ****** Global Variables Declarations ****** */
stack *scopesStack = NULL;
declaration **declarations = NULL;
declaration **arguments = NULL;
funcProcCall *funcProcCalls = NULL;
error *errors = NULL;
int declarationSize = 0;
int argumentSize = 0;
char *retType = NULL;


void push(scope *sp) {
	if(scopesStack && scopesStack->currentScope){
		sp->nextScope = scopesStack->currentScope;
		scopesStack->currentScope = sp;
	} else {
		scopesStack = (stack*)malloc(sizeof(stack));
		scopesStack->currentScope = sp;
	}
}

scope* pop(){
	scope *tempScope = scopesStack->currentScope;
	scopesStack->currentScope = tempScope->nextScope;
	tempScope->nextScope = NULL;
	return tempScope;
}

scope* peak(){
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

void createScope(char *name, char *type, char *typeReturn) {
	// if(checkFuncProcAppearance(name, type)){
	// 	printf("Error: %s name '%s' already exist!\n", type, varName);
	// 	exit(EXIT_FAILURE);
	// 	FreeMemory();
	// }
	printf("createScope\n");
	printf("Name is: %s\n", name);

	scope *newScope = (scope*)malloc(sizeof(scope));
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
	newScope->argumentSize = argumentSize;

	newScope->declarationSize = declarationSize;

	//initiliaze two dynamic matrixes of all scope arguments, and all scope declarations.
	newScope->arguments = arguments;
	newScope->declarations = declarations;
	push(newScope);
	clearMemory();
}

void addProcFunc(char *name, char *type){
	scope *temp = peak();
	printf("ADD PROC FUNC name: %s \n", name);
	if(temp && checkFuncProcAppearance(name, type, temp->declarations, temp->declarationSize)){
		printf("Error: %s name '%s' already exist in the same scope!\n", type, name);
		exit(EXIT_FAILURE);
		FreeMemory();
	}
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
	if(checkVarAppearance(argVar, arguments, argumentSize)){
		printf("Error: variable name '%s' already exist in the same scope!\n", argVar);
		exit(EXIT_FAILURE);
		FreeMemory();
	}
	declaration *newArgument = (declaration*)malloc(sizeof(declaration));
	newArgument->name = (char*)malloc(sizeof(argVar) + 1);
	strcpy(newArgument->name, argVar);
	if(argumentSize > 0){
		argumentSize++;
		arguments = (declaration**)realloc(arguments, argumentSize); //reallocate memory for the new declaration
	} else{
		arguments = (declaration**)malloc(sizeof(declaration*));
		argumentSize++;
	}
	arguments[argumentSize - 1] = newArgument;
}

void setArgsType(char *type){
	for(int i = argumentSize - 1; i >= 0; i--){
		if(arguments[i]->name && !arguments[i]->type){
			arguments[i]->type = (char*)malloc(sizeof(type) + 1);
			strcpy(arguments[i]->type, type);
		}
	}
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

bool checkFuncProcAppearance(char *name,  char *type, declaration **holder, int size){
	for(int i = size - 1; i >= 0; i--){
		if(strcmp(holder[i]->name, name) == 0 && strcmp(holder[i]->type, type) == 0){
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

bool checkFuncProcCallAppearance(char *funcProcName){
	scope *curScope = peak();
	/*
		[ ] - check if the function is appear in the scope.
			[ ] - if numnber of arguments are 0 
			[ ] - if number of arguments are not 0
				[ ] - check if the types are equal.
	*/

	//check if the function is not appear in the scope
	int flag = 0;
	char *err;
	printf("check proc func appearance 1\n");
	if(!(strcmp(curScope->name, funcProcName) == 0 && (strcmp(curScope->type, "function") ||
		strcmp(curScope->type, "procedure")))){
		errors = (error*)malloc(sizeof(error));
		err = "is not appear in the scope!";
		errors->errorMessage = (char*)malloc(sizeof(err) + 1);
		strcpy(errors->errorMessage, err);
		return false;		
	}
	//case function is appear in the scope
	//and function call with 0 arguments and function declare with 0 arguments
	if(curScope->argumentSize == 0 && funcProcCalls->argsSize == 0){
		return true;
	}
	//case function is appear in the scope
	//and function call has no the same arguments number as the function declaretion
	printf("printing the arguments of the scope:\n");
	for(int i = curScope->argumentSize - 1; i >= 0; i--){
		printf("%s\n", curScope->arguments[i]->name);
	}

	if(curScope->argumentSize != funcProcCalls->argsSize){
		errors = (error*)malloc(sizeof(error));
		err = ",call function has not the same amount of arguments";
		errors->errorMessage = (char*)malloc(sizeof(err) + 1);
		strcpy(errors->errorMessage, err);
		printf("check proc func appearance 2\n");
		return false;
	}
	//case function appear in the scope
	//and function call and function declaration has the same number of arguments
	//need to check if the arguments are the same type
	//case function call parameteres are varibles
	for(int i = funcProcCalls->argsSize - 1; i >= 0; i--){
		for(int j = declarationSize - 1; j >= 0; i--){
			if(strcmp(funcProcCalls->args[i]->name, declarations[j]->name) == 0){
				if(strcmp(declarations[j]->type, curScope->arguments[i]->type) != 0){
					//case the function call has an varialbe and the variable is recognize in the scope 
					// but it is not with the same type
					return false;
				}
			}
		}
	}

	//check if the arguments from function call is the same in the declare of the function
	for(int i = funcProcCalls->argsSize - 1; i >= 0; i--){
		if(strcmp(funcProcCalls->args[i]->name, curScope->arguments[i]->name) != 0){
			return false;
		}
	}
	return true;
}

void addProcFuncCall(char *funcProcName){
	printf("add proc func call 1\n");
	if(!funcProcCalls || !checkFuncProcCallAppearance(funcProcName)){
		printf("add proc func call 2\n");
		printf("Error: function/procedure name '%s' %s\n", funcProcName, errors->errorMessage);
		FreeMemory();
		exit(EXIT_FAILURE);
	}
	funcProcCalls->name = (char*)malloc(sizeof(funcProcName) + 1);
	strcpy(funcProcCalls->name, funcProcName);

	clearMemory();
}

void printStack(){
	printf("\n======================================================\n\n");
	scope *temp = peak();
	while(temp){
		printf("%s\n", temp->name);
		printf("%s\n", temp->type);
		printf("%s\n", temp->returnType);
		printf("declarationSize = %d\n", temp->declarationSize);
		printf("argumentSize = %d\n", temp->argumentSize);
		for(int i = temp->declarationSize - 1; i >= 0; i--){
			if(temp->declarations[i]->type){
				printf("%s\n",temp->declarations[i]->type);
				printf("%s\n", temp->declarations[i]->name);
			}
		}
		for(int i = temp->argumentSize - 1; i >= 0; i--){
			printf("%s\n", temp->arguments[i]->type);
			printf("%s\n", temp->arguments[i]->name);
		}
		printf("\n\n");
		temp = temp->nextScope;
	}
	FreeMemory();
}