#include <stdbool.h>

typedef struct Declaration{
	char *type;
	char *name;
} declaration;

typedef struct Condition{
	declaration *leftSide;
	declaration *rightSide;
	bool hasOperator;
	bool insertToLeft;
	bool isComplete;
} condition;


typedef struct Scope {
	struct Scope *nextScope; // the next scope in the stack
	struct Scope **scopes; ///all the scopes inside the current scope
	int scopesSize;
	char *name;
	char *type;
	char *returnType;
	declaration **arguments;
	int argumentSize;
	declaration **declarations;
	int declarationSize;
} scope;

typedef struct FuncProcCall {
	declaration **args;
	int argsSize;
	char *name;
} funcProcCall;

typedef struct Global {
	scope **scopes;
} global;

typedef struct Stcak{
	scope *currentScope;
} stack;

typedef struct Error{
	char *errorMessage;
} error;

void push(scope *sp);
void pop();
scope *peak();
void addVar(char *varName);
void setScope(char *name, char *type, char *returnType);
void addArguments(char *type);
void printStack();
void setArgsType(char *type);
void addArgVar(char *argVar);

void checkFuncProcCall(char *arg);
void pushEndSign(char *sign);
void pushNewScope();
void popScope(char *type);
void printGlobal();
void printErrors();
void checkMain();
void setVarType(char *type);
void addFuncCallArgType(char *arg, char *type);
void addReturnType(char *returnType);
void checkReturn(char *returnType);
void addVarAssign(char *var); // add the name
void clearFuncName();
void checkStringType(char *type);
void checkStrType(char *type);
void addLeft(char *varName);
void addRightVar(char *type, char *name);
void checkLeftRight();
void addOperator(char *op);
void commen();

void checkExpressionISBool(char *expr1, char *type);
void checkBoolStatements();
void operatorisHere(char *type);
void checkCondition();
void logiaclOperator(char *type);
char* getVarTypeByName(char *name);