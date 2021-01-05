#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <stdbool.h>
#include <ctype.h> 
#include "part2.h"

/*Functions Declarations*/
void addOperator(char *op);
void checkLeftRight();
void addRightVar(char *type, char *name);
void addLeft(char *varName);
void checkStrType(char *type);
void checkStringType(char *type);
void clearFuncName();
void addVarAssign(char *var); // add the name
void checkExpressionISBool(char *expr1, char *type);
void checkBoolStatements();
void operatorisHere(char* type);
void checkCondition();
void logiaclOperator(char *type);
char* getVarTypeByName(char *name);
void checkReturn(char *returnType);
void addReturnType(char *returnType);
void freeFunctionCallArguments();
void addFuncCallArgType(char *arg, char *type);
void setVarType(char *type);
void checkFuncProcCall(char *arg);
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
void popScope(char *type);
void pushNewScope(char *name);
void pushEndSign(char *sign);
void addToGlobal(scope *sp);
void addScopeToArrayOfScopes(scope *parent, scope *child);
void push(scope *sp);
void pop();
scope* peak();

/*Global Variables Declarations*/
stack *scopesStack;
global *globalScope;
int globalScopeSize = 0;
bool isMain = false;
error **errors;
int errorSize = 0;
declaration **functionCallArguments;
int functionCallSize = 0;
condition *myCondition;
char *functionName;
char *lhsVarType;
char *rightVar;
char *operator;

/*check if the right and left sides of the asssignment are legal*/
void checkLeftRight(){
	printf("IN CHECK\n");
	printf("left side: %s\tright side: %s\n", lhsVarType, rightVar);
	if(operator){
		if((strcmp(operator, "+") == 0 ||
		strcmp(operator, "-") == 0 || 
		strcmp(operator, "*") == 0 ||
		strcmp(operator, "/") == 0)){
		if(strcmp(rightVar, "INTEGER") != 0 &&
			strcmp(rightVar, "REAL") != 0){
			addError("Error: operators '+', '-', '*', '/' must appear with integer or real operands!");
			}
		} else if(strcmp(operator, "!") == 0) {
			if(strcmp(rightVar, "BOOLEAN") != 0){
				addError("Error: operator '!' must appear with bool type");
			}
		} else if(strcmp(operator, "&") == 0) {
			printf("in & IF\n");
			if(strcmp(rightVar, "INTEGER") != 0 &&
				strcmp(rightVar, "REAL") != 0 &&
				strcmp(rightVar, "STRING") != 0){
				addError("Error: operator '&' must appear with integer, real, or string operands!");
			}
		} else if(strcmp(operator, "^") == 0) {
			if(strcmp(rightVar, "INT*") != 0 &&
				strcmp(rightVar, "REAL*") != 0 &&
				strcmp(rightVar, "STRING") != 0){
				addError("Error: operator '^' must appear with pointers!");
			}

		}
	}
	if(lhsVarType && rightVar && strcmp(lhsVarType, rightVar) != 0){
		addError("Error: left side type and right side type are not the same!");
	}
	if(lhsVarType){
		free(lhsVarType);
	}
	if(rightVar){
		free(rightVar);
	}
	if(operator){
		free(operator);
	}
	operator = NULL;
	lhsVarType = NULL;
	rightVar = NULL;
}

void addOperator(char *op){
	if(operator){	
		free(operator);
		operator = NULL;
	}
	operator = (char*)malloc(sizeof(op) + 1);
	strcpy(operator, op);
}

/*add the type of the right side of the assignment*/
void addRightVar(char *type, char *name){
	printf("ADD RIGHT VAR\n");
	//check if the type is IDENTIFIER
	if(strcmp(type, "IDENTIFIER") == 0){
		bool varExist = false;
		scope *temp = peak();
		for(int i = temp->declarationSize - 1; i >= 0; i--){
			if(strcmp(temp->declarations[i]->name, name) == 0){
				varExist = true;
				type = (char*)malloc(sizeof(temp->declarations[i]->type) + 1);
				strcpy(type, temp->declarations[i]->type);
			}
		}
		if(!varExist){
			addError("Error: variable use before declare!");
			return;
		}
	}
		//if it is then check if the identifier exist
			//if it is then check if its type and check if its the same as the current type
		//it its not exist then addError
	if(rightVar){
		if(strcmp(rightVar, type) != 0) {
			free(rightVar);
			char *n = "NOT_SAME";
			rightVar = (char*)malloc(sizeof(n) + 1);
			strcpy(rightVar, n);
		}
	} else {
		rightVar = (char*)malloc(sizeof(type) + 1);
		strcpy(rightVar, type);
	}
}

/*add the name of the left hand assign*/
void addLeft(char *varName){
	printf("Add LEFT\n");
	if(lhsVarType){
		free(lhsVarType);
		lhsVarType = NULL;
	}
	scope *temp = peak();
	bool isExist = false;
	for(int i = temp->declarationSize - 1; i >= 0; i--){
		if(strcmp(temp->declarations[i]->name, varName) == 0){
			lhsVarType = (char*)malloc(sizeof(temp->declarations[i]->type) + 1);
			strcpy(lhsVarType, temp->declarations[i]->type);
			isExist = true;
		}
	}
	if(!isExist){
		lhsVarType = (char*)malloc(sizeof("-") + 1);
		strcpy(lhsVarType, "-");
		addError("Error: variable use before declare!");
	}
}

/*check if using the operator [] with type that not string*/
void checkStrType(char *type){
	if(strcmp("STRING", type) != 0){
		addError("Error: using the operator '[]' must be with type integer!");
	}
}

/*check if the expression inside the [] of string are integer*/
void checkStringType(char *type){
	if(strcmp("INTEGER", type) != 0){
		addError("Error: expression inside string index must be integer type!");
	}
}

/*add function assign to variable and check if the assign is legal(var declare and type, function return type)*/
void addVarAssign(char *var){
	if(functionName){
		//find the scope that has the name of the function(help checkFuncProcCall)
		scope *temp = peak();
		scope *sp = NULL;
		for(int i = temp->scopesSize - 1; i >= 0; i--){
			if(strcmp(temp->scopes[i]->name, functionName) == 0){
				sp = temp->scopes[i];
			}
		}
		for(int i = globalScopeSize - 1; i >= 0; i--){
			if(strcmp(globalScope->scopes[i]->name, functionName) == 0){
				sp = globalScope->scopes[i];
			}
		}
		if(sp){
			bool isVar = false;
			bool isRetType = false;
			for(int i = temp->declarationSize - 1; i >= 0; i--){
				if(strcmp(temp->declarations[i]->name, var) == 0){
					isVar = true;
					if(strcmp(temp->declarations[i]->type, sp->returnType) == 0){
						isRetType = true;
					}
				}
			}
			if(!isVar){
				addError("Error: variable must be declare before using!");
			} else if(!isRetType){
				addError("Error: function return type must be match to variable type!");
			}
		}
		free(functionName);
		functionName = NULL;
	}
}

void clearFuncName(){
	if(functionName){
		free(functionName);
		functionName = NULL;
	}
}

void logiaclOperator(char *type)
{
	if(strcmp(type,"AND")==0 || strcmp(type,"OR")==0)
	{
		if(!myCondition || !myCondition->isComplete)
		{
			addError("Error: operator must come after and before boolean values!");
			return;
		}
		myCondition->isComplete = false;
		myCondition->leftSide = true;
	}
}


void operatorisHere(char* type)
{
	myCondition->hasOperator = true;
	myCondition->isComplete = true;
	if(strcmp(type,"GREATER")==0||strcmp(type,"LESS")==0||strcmp(type,"GREATEREQUAL")==0||strcmp(type,"LESSEQUAL")==0)
	{
		if(!(strcmp(myCondition->leftSide->type,"INTEGER")==0 && strcmp(myCondition->rightSide->type,"INTEGER")==0))
		{
			if(!(strcmp(myCondition->leftSide->type,"REAL")==0 && strcmp(myCondition->rightSide->type,"REAL")==0))
			{	
				addError("Error: size comparsion operators can only appear between integers or real");
			}				
		}
	}
	if(strcmp(type,"COMPARE")==0||strcmp(type,"NOTEQUAL")==0)
	{
		if(!(strcmp(myCondition->leftSide->type,"INTEGER")==0 && strcmp(myCondition->rightSide->type,"INTEGER")==0))
		{
			if(!(strcmp(myCondition->leftSide->type,"REAL")==0 && strcmp(myCondition->rightSide->type,"REAL")==0))
			{	
				if(!(strcmp(myCondition->leftSide->type,"BOOLEANTRUE")==0 && strcmp(myCondition->rightSide->type,"BOOLEANTRUE")==0))
				{	
					if(!(strcmp(myCondition->leftSide->type,"BOOLEANFALSE")==0 && strcmp(myCondition->rightSide->type,"BOOLEANFALSE")==0))
					{	
										addError("Error:  comparsion operators can only appear between integers or real");
					}	
				}	
			}				
		}
	}
}

void checkBoolStatements()
{

}
void checkCondition()
{
	if(!myCondition->isComplete)
	{
		addError("Error: if and while must contain a boolean condition!");
	}
	myCondition->isComplete = false;
	myCondition->insertToLeft = true;
}


char* getVarTypeByName(char *name)
{
	scope *currScope = peak();
	for(int i=0;i<currScope->declarationSize;i++)
	{
		if(strcmp(currScope->declarations[i]->name,name)==0)
		{
			return currScope->declarations[i]->type;
		}
	}
	return NULL;
}

void checkExpressionISBool(char *expr1,char *type)
{
	// char* test = (char*)malloc(sizeof(char)*20);
	// test = getVarTypeByName("a");
	if(!myCondition)
	{
		myCondition = (condition*)malloc(sizeof(condition));
		myCondition->hasOperator = false;
	}
	if(!myCondition->insertToLeft) // expression is left side
	{
		myCondition->isComplete=false;
		myCondition->leftSide = (declaration*)malloc(sizeof(declaration));
		myCondition->leftSide->name = (char*)malloc(sizeof(char)*20);
		myCondition->leftSide->type = (char*)malloc(sizeof(char)*20);
		strcpy(myCondition->leftSide->name,expr1);
		strcpy(myCondition->leftSide->type,type);
		if(strcmp(type,"BOOLEANTRUE") == 0 || strcmp(type,"BOOLEANFALSE")== 0)
		{
			myCondition->isComplete=true;
		}
		myCondition->insertToLeft = true;
		
	}
	else // expr1 is right side -> check operator
	{
		myCondition->rightSide = (declaration*)malloc(sizeof(declaration));
		myCondition->rightSide->name = (char*)malloc(sizeof(char)*20);
		myCondition->rightSide->type = (char*)malloc(sizeof(char)*20);
		strcpy(myCondition->rightSide->name,expr1);
		strcpy(myCondition->rightSide->type,type);
		myCondition->insertToLeft = false;
	}
}


/*check if the return statement type match the return type of the function*/
void checkReturn(char *returnType){
	if(strcmp(returnType, "STRING") == 0){
		addError("Error: function cannot return type string!");
		return;
	}
	scope *temp = peak();
	if(strcmp(temp->returnType, returnType) != 0){
		addError("Error: mismatch function return type and return statement!");
	}
}

/*add the return type of the function*/
void addReturnType(char *returnType){
	scope *temp = peak();
	temp->returnType = (char*)malloc(sizeof(returnType) + 1);
	strcpy(temp->returnType, returnType);
	if(strcmp(returnType, "STRING") == 0){
		addError("Error: function cannot return type string!");
	}
}

/*free memory of functionCallArguments*/
void freeFunctionCallArguments(){
	for(int i = functionCallSize - 1; i >= 0; i--){
		if(functionCallArguments[i] && functionCallArguments[i]->name){
			free(functionCallArguments[i]->name);
		}if(functionCallArguments[i] && functionCallArguments[i]->type){
			free(functionCallArguments[i]->type);
		}if(functionCallArguments[i]){
			free(functionCallArguments[i]);
		}
	}
	if(functionCallArguments){
		free(functionCallArguments);
	}
}

/*add function/procedure argument to list of arguments*/
void addFuncCallArgType(char *arg, char *type){
	functionCallSize++;
	bool isType = true;
	declaration *newFuncCall = (declaration*)malloc(sizeof(declaration));
	newFuncCall->name = (char*)malloc(sizeof(arg) + 1);
	if(!type){
		scope *temp = peak();
		for(int i = temp->declarationSize - 1; i >= 0; i--){
			if(strcmp(temp->declarations[i]->name, arg) == 0){
				if(temp->declarations[i]->type){
					newFuncCall->type = (char*)malloc(sizeof(temp->declarations[i]->type) + 1);
					strcpy(newFuncCall->type, temp->declarations[i]->type);
					isType = true;
				} else{
					isType = false;
				}
			}
		}
	} else {
		newFuncCall->type = (char*)malloc(sizeof(type) + 1);
		strcpy(newFuncCall->type, type);
	}
	if(functionCallSize - 1 > 0){
		functionCallArguments =  (declaration**)realloc(functionCallArguments, functionCallSize);
	} else {
		functionCallArguments = (declaration**)malloc(sizeof(declaration*));
	}

	functionCallArguments[functionCallSize - 1] = newFuncCall;

	if(!isType){
		addError("Error: variable use before declared!");
	}
}

/*check function / procedure call exist in the same scope*/
void checkFuncProcCall(char *callName) {
	if(functionName){
		free(functionName);
	}
	functionName = (char*)malloc(sizeof(callName) + 1);
	strcpy(functionName, callName);
	scope *temp = peak();
	scope *sp = NULL;
	bool isFuncExist = false;
	for(int i = temp->scopesSize - 1; i >= 0; i--){
		if(strcmp(temp->scopes[i]->name, callName) == 0){
			sp = temp->scopes[i];
			isFuncExist = true;
		}
	}
	for(int i = globalScopeSize - 1; i >= 0; i--){
		if(strcmp(globalScope->scopes[i]->name, callName) == 0){
			sp = globalScope->scopes[i];
			isFuncExist = true;
		}
	}
	if(!isFuncExist){
		addError("Error: function/procedure call must be declared before calling!");
		
		return;
	}
	if(sp){
		if(functionCallSize != sp->argumentSize){
			addError("Error: function/procedure call mismatch number of arguments in the declaration!");
			return;
		}
		for(int i = functionCallSize - 1; i >= 0; i--){
			if(strcmp(functionCallArguments[i]->type, sp->arguments[i]->type) != 0 ){
					addError("Error: function/procedure call mismatch arguments type!");
					return;
			}
		}
	}
}

/*set declared variable type*/
void setVarType(char *type){
	scope *temp = peak();
	for(int i = temp->declarationSize - 1; i >= 0; i--){
		if(temp->declarations[i]->name && !temp->declarations[i]->type){
			temp->declarations[i]->type = (char*)malloc(sizeof(type) + 1);
			strcpy(temp->declarations[i]->type, type);
		}
	}
}

/*add var to the var list of the scope*/
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
void popScope(char *type){
	scope *temp = peak();
	temp->type = (char*)malloc(sizeof(type) + 1);
	strcpy(temp->type, type);
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