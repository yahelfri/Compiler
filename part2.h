typedef struct Argument{
	char *type;
} argument;

typedef struct Declaration{
	char *type;
	char *name;
}declaration;

typedef struct Scope {
	struct Scope *nextScope;
	char *name;
	char *type;
	char *returnType;
	argument **arguments;
	int argumentSize;
	declaration **declarations;
	int declarationSize;
} scope;


typedef struct Stcak{
	scope *currentScope;
} stack;

void createScope(char *name, char *type, char *returnType);
void push(scope *sp);
scope *pop();
scope *peak();
void addDeclaration(char *type, char *name);
void addArguments(char *type);
void printStack();


// main() {
// 	int ab;
// 	proc foo(x, y, z: int; f: real){
// 		if(x > y){
// 			x = x + f;
// 		} else{
// 			y = x+ y + z;
// 		}
// 	}

// 	func goo() return char{
// 		ab = 5;
// 		return 'a';
// 	}
// }