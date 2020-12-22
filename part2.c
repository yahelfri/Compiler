#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "part2.h"

stack *scopesStack = NULL;
declaration **declarations = NULL;
argument **arguments = NULL;
int declarationSize = 0;
int argumentSize = 0;
char *type_ = NULL;


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

void FreeMemory(){
	printf("FreeMemory\n");

	// for(int i = argumentSize - 1; i >= 0; i--){
	// 	free(arguments[i]->type);
	// 	free(arguments[i]);
	// }
	
	// for(int i = declarationSize - 1; i >= 0; i--){
	// 	free(declarations[i]->type);
	// 	free(declarations[i]);
	// }

	// if(type_){
	// 	free(type_);
	// }
	
	// free(arguments);
	// free(declarations);
	arguments = NULL;
	declarations = NULL;
	type_ = NULL;
	declarationSize = 0;
	argumentSize = 0;
}


void createScope(char *name, char *type, char *typeReturn) {
	printf("createScope\n");

	scope *newScope = (scope*)malloc(sizeof(scope));
	newScope->nextScope = NULL;
	printf("1\n");
	newScope->name = (char*)malloc(sizeof(name) + 1);
	
	strcpy(newScope->name,name);
	newScope->type = (char*)malloc(sizeof(type) + 1);
	printf("2\n");
	strcpy(newScope->type, type);
	printf("3	\n");
	if(typeReturn){
		newScope->returnType = (char*)malloc(sizeof(typeReturn) + 1);
		printf("4\n");
		strcpy(newScope->returnType, typeReturn);
	} else { // need to check the else part because of setType (types in GRAMMER)
		newScope->returnType = type_;
		printf("5 ==> %s\n", newScope->returnType);
	}
	newScope->argumentSize = argumentSize;

	newScope->declarationSize = declarationSize;

	//initiliaze two dynamic matrixes of all scope arguments, and all scope declarations.
	newScope->arguments = arguments;
	newScope->declarations = declarations;
	push(newScope);
	FreeMemory();
}




void addDeclaration(char *type, char *name){
	printf("addDeclaration\n");

	if(!type && name){
		declarations = (declaration**)malloc(sizeof(declaration*));
		declaration *newDeclare = (declaration*)malloc(sizeof(declaration));
		newDeclare->name = (char*)malloc(sizeof(name) + 1);
		strcpy(newDeclare->name, name);
		declarationSize += 1;
		if(declarationSize - 1 > 0){
			declarations = (declaration**)realloc(declarations, declarationSize); //reallocate memory for the new declaration
		}
		printf("from add declarations name: %s\n", newDeclare->name);
		declarations[declarationSize - 1] = newDeclare;
	} else if(type && !name) {
		for(int i = declarationSize - 1; i >= 0; i--){
			if(!declarations[i]->type){
				declarations[i]->type = (char*)malloc(sizeof(type) + 1);
				strcpy(declarations[i]->type, type);
				printf("from add declarations type:%s\n", declarations[i]->type);
			}
		}
	} else if(!type && !name){
		for(int i = declarationSize - 1; i >= 0; i--){
			if(!declarations[i]->type){
				declarations[i]->type = (char*)malloc(sizeof(type) + 1);
				strcpy(declarations[i]->type, type_);
				printf("from add declarations type:%s\n", declarations[i]->type);
			}
		}
	}
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

void setType(char *type){
	printf("6 TYPE IS: %s\n", type);
	type_ = (char*)malloc(sizeof(type) + 1);
	strcpy(type_, type);
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
			}
			if( temp->declarations[i]->name){
				
				printf("%s\n", temp->declarations[i]->name);
			}
		}
		;
		for(int i = temp->argumentSize - 1; i >= 0; i--){
			printf("%s\n", temp->arguments[i]->type);
		}
		printf("\n\n");
		temp = temp->nextScope;
	}
}