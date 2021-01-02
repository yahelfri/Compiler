typedef struct Declaration{
	char *type;
	char *name;
} declaration;

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
void setVarType(char *type);
void setRetType(char *returnType);
void addVar(char *varName);
void setScope(char *name, char *type, char *returnType);
void addArguments(char *type);
void printStack();
void setArgsType(char *type);
void addArgVar(char *argVar);
// void addProcFunc(char *name, char *type);
void pushEndSign(char *sign);
void pushNewScope();
void popScope();
void printGlobal();
void printErrors();
void checkMain();