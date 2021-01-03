#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <stdbool.h>
#include "part2.h"

void addFuncProcCall(char *callName);
void addVar(char *varName);
void checkVar(scope *temp, char *argVar);
void checkMain();
void checkFuncProcName();
void checkMainParam(scope *temp);
void setArgType(char *type);
void addArgVar(char *argVar);
void printErrors();
void addError(char *err);
void p();
void printfStack();
void popScope(char *type, char *returnType);
void pushNewScope(char *name);
void pushEndSign(char *sign);
void addToGlobal(scope *sp);
void addScopeToArrayOfScopes(scope *parent, scope *child);
void push(scope *sp);
void pop();
scope* peak();

stack *scopesStack;
global *globalScope;
int globalScopeSize = 0;
bool isMain = false;
error **errors;
int errorSize = 0;


void addFuncProcCall(char *callName) {
	scope *temp = peak();
	for(int i = temp->scopesSize - 1; i >= 0; i--){
		if(strcmp(temp->scopes[i]->name, callName == 0)){
			return;
		}
	}
	for(int i = globalScopeSize - 1; i >= 0; i--){
		if(strcmp(globalScope->scopes[i]->name, callName) == 0){
			return;
		}
	}
	addError("Error: function/procedure call must be declared before calling!");
}

/*add var tot the var list of the scope*/
void addVar(char *varName){
	declaration *newVar = (declaration**)malloc(sizeof(declaration));
	newVar->name = (char*)malloc(sizeof(varName) + 1);
	strcpy(newVar->name, varName);
	scope *temp = peak();
	temp->declarationSize++;
	if(temp->declarationSize - 1 > 0){
		temp->declarations = (declaration**)realloc(temp->declarations, temp->declarationSize);

	}else {
		temp->declarations = (declaration**)malloc(sizeof(declaration*));
	}
	temp->declarations[temp->declarationSize - 1] = newVar;
	checkVar(temp, varName);
}

void checkVar(scope *temp, char *argVar){
	for(int i = temp->declarationSize - 1; i >= 0; i--){
		for(int j = i - 1; j >= 0; j--){
			if(strcmp(temp->declarations[i]->name, temp->declarations[j]->name) == 0){
				addError("Error: variables with the same name cannot appear in the same scope!");
				break;
			}
		}
	}
}

/*check main function exist once in the code*/
void checkMain(){
	if(!isMain){
		addError("Error: procedure Main must exist!");
	}
}


/*function that check if function/procedure name already appear in the scope*/
void checkFuncProcName(){
	for(int i = globalScopeSize - 1; i >= 0; i--){
		for(int j = i - 1; j >= 0; j--){
			if(strcmp(globalScope->scopes[i]->name, globalScope->scopes[j]->name) == 0 &&
				strcmp(globalScope->scopes[i]->type, globalScope->scopes[j]->type) == 0){
				addError("Error: functions/procedures with the same name cannot apear in the same scope!");
			}
		}
	}
	bool err = false;
	for(int i = globalScopeSize - 1; i >= 0; i--){
		for(int j = globalScope->scopes[i]->scopesSize - 1; j >= 0; j--){
			for(int k = j - 1; k >= 0; k--){
				if((strcmp(globalScope->scopes[i]->name, globalScope->scopes[i]->scopes[j]->name) == 0 &&
					strcmp(globalScope->scopes[i]->type, globalScope->scopes[i]->scopes[j]->type) == 0) ||
				 strcmp(globalScope->scopes[i]->scopes[j]->name, globalScope->scopes[i]->scopes[k]->name) == 0 &&
					strcmp(globalScope->scopes[i]->scopes[j]->type, globalScope->scopes[i]->scopes[k]->type) == 0){
					err = true;
				}
			}
		}
	}
	if(err){
		addError("Error: functions/procedures with the same name cannot apear in the same scope!");
	}
}

/*function  that check if main get parameters*/
void checkMainParam(scope *temp){
	if(strcmp(temp->name, "Main") == 0){
		if(temp->argumentSize > 0){
		addError("Error: Main procedure cannot get parametrs!");
		}
	}
}

/*set scope argument type*/
void setArgType(char *type){
	scope *temp = peak();
	for(int i = temp->argumentSize - 1; i >= 0; i--){
		if(temp->arguments[i]->name && !temp->arguments[i]->type){
			temp->arguments[i]->type = (char*)malloc(sizeof(type) + 1);
			strcpy(temp->arguments[i]->type, type);
		}
	}	
}


/*add argument to the list of arguments of the scope*/
void addArgVar(char *argVar){
	declaration *newArg = (declaration*)malloc(sizeof(declaration));
	newArg->name = (char*)malloc(sizeof(argVar) + 1);
	strcpy(newArg->name, argVar);
	scope *temp = peak();
	temp->argumentSize++;
	if(temp->argumentSize - 1 > 0){
		temp->arguments = (declaration**)realloc(temp->arguments, temp->argumentSize);

	}else {
		temp->arguments = (declaration**)malloc(sizeof(declaration*));
	}
	temp->arguments[temp->argumentSize - 1] = newArg;
}

/*print out all the errors*/
void printErrors(){
	for(int i = errorSize - 1; i >= 0; i--){
		printf("%s\n", errors[i]->errorMessage);
	}	
}

/*add error to the list of errors*/
void addError(char *err){
	error *e = (error*)malloc(sizeof(error));
	e->errorMessage = (char*)malloc(sizeof(err) * 24);
	strcpy(e->errorMessage, err);
	errorSize++;
	if(errorSize - 1 > 0){
		errors = (error**)realloc(errors, errorSize);
	} else {
		errors = (error**)malloc(sizeof(error*));
	}
	errors[errorSize - 1] = e;
}


/*printf out the stack*/
void printfStack(){
	printf("print scope:\n");
	scope *temp = peak();
	while(temp){
		printf("scope name: %s\n", temp->name);
		temp = temp->nextScope;
	}
}

/*recursive print of the global childs*/
void p(scope *sp){
	if(sp->scopesSize > 0){
		printf("\tchild scopes:\n");
		for(int j = sp->scopesSize - 1; j >= 0; j--){
			printf("\tchild scope name: %s\n", sp->scopes[j]->name);
			p(sp->scopes[j]);
		}
	}
}

/*print out all the environment scopes*/
void printAll(){
	printf("print:\n");
	for(int i = globalScopeSize - 1; i >= 0; i--){
		printf("scope name: %s\n", globalScope->scopes[i]->name);
		p(globalScope->scopes[i]);
	}
}

/*pop the first scope from the stack*/
void popScope(char *type, char *returnType){
	scope *temp = peak();
	temp->type = (char*)malloc(sizeof(type) + 1);
	strcpy(temp->type, type);
	temp->returnType = (char*)malloc(sizeof(returnType) + 1);
	strcpy(temp->returnType, returnType);

	checkMainParam(temp);
	pop();
}

/*push empty scope to the scopes stack*/
void pushNewScope(char *name){
	if(strcmp(name, "Main") == 0){
		if(isMain){
			addError("Error: Main procedure can exist only once!");
		} else {
			isMain = true;
		}
	}
	scope *newScope = (scope*)malloc(sizeof(scope));
	newScope->name = (char*)malloc(sizeof(name) + 1);
	strcpy(newScope->name, name);
	push(newScope);
}

/*push end sign to the stack*/
void pushEndSign(char *sign){
	scope *endSign = (scope*)malloc(sizeof(scope));
	endSign->name = (char*)malloc(sizeof(sign) + 1);
	strcpy(endSign->name, sign);
	push(endSign);
}

/*add new scope to the global scopes array*/
void addToGlobal(scope *sp){
	globalScopeSize++;
	if(globalScopeSize - 1 > 0){
		globalScope->scopes = (scope**)realloc(globalScope->scopes, globalScopeSize);
	} else {
		globalScope = (global*)malloc(sizeof(global));
		globalScope->scopes = (scope**)malloc(sizeof(scope*));
	}
	globalScope->scopes[globalScopeSize - 1] = sp;
}

/*add child scope to the parent scopes array*/
void addScopeToArrayOfScopes(scope *parent, scope *child){
	parent->scopesSize++;
	if(parent->scopesSize - 1 > 0){
		parent->scopes = (scope**)realloc(parent->scopes, parent->scopesSize);
	} else {
		parent->scopes = (scope**)malloc(sizeof(scope*));
	}
	parent->scopes[parent->scopesSize - 1] = child;
}

/* Stack functionality */
void push(scope *sp) {
	if(scopesStack && scopesStack->currentScope){
		scope *temp = peak();
		// printf("scope name from push: %s\n", temp->name);
		if(temp->name && strcmp(temp->name, "$$") == 0){
			addToGlobal(sp);
		} else {
			addScopeToArrayOfScopes(temp, sp);
		}
		sp->nextScope = scopesStack->currentScope;
		scopesStack->currentScope = sp;
	} else {
		scopesStack = (stack*)malloc(sizeof(stack));
		scopesStack->currentScope = sp;
	}
	printfStack();
}

void pop(){
	scope *tempScope = scopesStack->currentScope;
	scopesStack->currentScope = tempScope->nextScope;
	tempScope->nextScope = NULL;
}

scope* peak(){
	if(scopesStack && scopesStack->currentScope){
		return scopesStack->currentScope;
	}
	return NULL;
}