// #include "part2.h"

// typedef struct left {
// 	char *token;
// } left;

typedef struct node {
	char *token;
	struct node *left;
	struct node *right;
} node;


void setLeft(char *l);
void setRight(char *r);
void printCode();
void printParam(char *p);
void printFunc();
void function();
void printFuncName();
void endFunc();
void printIfCond(char *cond);
void printCond();