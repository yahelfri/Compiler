typedef struct Declaration{
	char *type;
	char *name;
}declaration;

typedef struct Scope {
	struct Scope *nextScope;
	char *name;
	char *type;
	char *returnType;
	declaration **arguments;
	int argumentSize;
	declaration **declarations;
	int declarationSize;
} scope;


typedef struct Stcak{
	scope *currentScope;
} stack;

void push(scope *sp);
scope *pop();
scope *peak();
void setVarType(char *type);
void setRetType(char *returnType);
void addVar(char *varName);
void createScope(char *name, char *type, char *returnType);
void addArguments(char *type);
void printStack();
void setArgsType(char *type);
void addArgVar(char *argVar);
void addProcFunc(char *name, char *type);
void func(char *str);
