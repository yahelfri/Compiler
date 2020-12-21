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
	int parametersNumber;
	argument *arguments;
	declaration *declarations;
} scope;


typedef struct Stcak{
	scope *currentScope;
} stack;

void createScope(char *name, char *type, char *returnType, int parametersNum, argument *arguments, declaration *declarations);
void printStack();
void push(scope *sp);
stack *pop();
stack *peak();


// void createScope();

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