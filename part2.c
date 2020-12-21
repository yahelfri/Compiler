#include <stdio.h>
#include <string.h>
#include "part2.h"

stack *scopesStack = NULL;

void createScope(char *name, char *type, char *returnType, int parametersNum, argument *arguments, declaration *declarations) {
	printf("**************************************** 1\n");
	scope *newScope = (scope*)malloc(sizeof(scope));
	newScope->name = (char*)malloc(sizeof(name) + 1);
	strcpy(newScope->name,name);
	newScope->type = (char*)malloc(sizeof(type) + 1);
	strcpy(newScope->type, type);
	newScope->returnType = (char*)malloc(sizeof(returnType) + 1);
	strcpy(newScope->returnType, returnType);
	newScope->parametersNumber = parametersNum;
	// newScope->arguments = (argument*)malloc(sizeof(arguments));
	// arguments;
	// newScope->declarations = declarations;
	push(newScope);
}

void push(scope *sp) {
	if(scopesStack){
		sp->nextScope = scopesStack->currentScope;
		scopesStack->currentScope = sp;
	} else {
		scopesStack->currentScope = sp;
	}
}

stack* pop(){
	scope *tempScope = scopesStack->currentScope;
	scopesStack->currentScope = tempScope->nextScope;
	tempScope->nextScope = NULL;
	return tempScope;
}

stack* peak(){
	return scopesStack->currentScope;
}

void printStack(){
	scope *temp = scopesStack->currentScope;
	while(temp){
		printf("%s\n", temp->name);
		printf("%s\n", temp->type);
		printf("%s\n", temp->returnType);
		printf("%d\n", temp->parametersNumber);
		temp = temp->nextScope;
	}
}