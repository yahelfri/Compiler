#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "part2.h"

stack *scopesStack = NULL;

void createScope(char *name, char *type, char *returnType) {
	scope *newScope = (scope*)malloc(sizeof(scope));
	newScope->nextScope = NULL;
	newScope->name = (char*)malloc(sizeof(name) + 1);
	strcpy(newScope->name,name);
	newScope->type = (char*)malloc(sizeof(type) + 1);
	strcpy(newScope->type, type);
	newScope->returnType = (char*)malloc(sizeof(returnType) + 1);
	strcpy(newScope->returnType, returnType);

	//initiliaze two dynamic matrixes of all scope arguments, and all scope declarations.
	newScope->arguments = (argument**)malloc(sizeof(argument*));
	newScope->declarations = (declaration**)malloc(sizeof(declaration*));

	push(newScope);
}

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
	return scopesStack->currentScope;
}

void addDeclaration(char *type, char *name){
	declaration *newDeclare = (declaration*)malloc(sizeof(declaration));
	newDeclare->type = (char*)malloc(sizeof(type) + 1);
	strcpy(newDeclare->type, type);
	newDeclare->name = (char*)malloc(sizeof(name) + 1);
	strcpy(newDeclare->name, name);
	scope *temp = peak();
	temp->declarationSize += 1;
	temp->declarations = (declaration**)realloc(temp->declarations, temp->declarationSize); //reallocate memory for the new declaration
	temp->declarations[temp->declarationSize] = newDeclare;
}

void addArguments(char *type){
	argument *newArgs = (argument*)malloc(sizeof(argument));
	newArgs->type = (char*)malloc(sizeof(type) + 1);
	strcpy(newArgs->type, type);
	scope *temp = peak();
	temp->argumentSize += 1;
	temp->arguments = (argument**)realloc(temp->arguments, temp->argumentSize);
	temp->arguments[temp->argumentSize] = newArgs;
}


void printArgs(){

}

void printDeclarations(){
	
}

void printStack(){
	printf("inside print\n");
	scope *temp = peak();
	while(temp){
		printf("%s\n", temp->name);
		printf("%s\n", temp->type);
		printf("%s\n", temp->returnType);
		temp = temp->nextScope;
	}
}