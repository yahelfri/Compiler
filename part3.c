#include "part3.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


node *tree;
int t_index = 0;
char *functionName;
char right[100][100];
int ri = 0;
char *left;
int Li =0;
char Lelements[100][100];

void printCond()
{
	printf("print cond\n");
	for(int i = 0; i <= (ri - 1)/2; i++){
		if(i  >= ri / 2){
			printf("%s ", right[i]);
		} else {
			printf("%s ", right[i]);
			int length = strlen(right[ri-1]) - 1;
			if(right[ri-1][length]==')')
			{
				right[ri-1][length] = '\0';
			}
				printf("%s ", right[ri - 1 - i]);
		}
	}
	ri=0;
	printf("Goto L%d\n",Li);
	Li++;
	printf("\tGoto L%d\n",Li);
	printf("L%d:",Li-1);
	printf("print cond2\n");
}


void printIfCond(char *cond)
{
	printf("\t%s ",cond);
}

void endFunc(){
	printf("\tendFunc\n");
}

void printFuncName(){
	printf("%s:\n", functionName);
	printf("\tBeginFunc\n");
	free(functionName);
}

void function(){
	// printf("FUNCTION \n");
}


void printFunc(){
	
	printf("\tt%d = LCall %s\n", t_index, functionName);
	printf("\tPopParams \n");
	printf("\t%s = t%d\n", left, t_index++);
	free(left);
	free(functionName);
}

void printParam(char *p){
	if(strlen(p) > 1){
		p[strlen(p) - 1] = '\0';
	}
	// printf("param p is: %s\n",p);
	printf("\tt%d = %s\n", t_index, p);
	printf("\tPushParam t%d\n", t_index++);
	// printf("function function: %s\n", functionName);
}

void printCode(){
	// printf("size: %d\n", ri);
	// for(int i = 0; i < ri; i++){
	// 	printf("%s", right[i]);
	// }
	// printf("\n");
	printf("\tt%d = ", t_index);
	for(int i = 0; i <= (ri - 1)/2; i++){
		if(i  >= ri / 2){
			printf("%s", right[i]);
		} else {
			printf("%s", right[i]);
			printf("%s", right[ri - 1 - i]);
		}
	}
	// int len = strlen(right) - 1;
	// for(int i = 0; i <= len / 2 ; i++){

	// }
	printf("\n\t%s = t%d\n", left, t_index++);
	free(left);
	ri = 0;
}


char *concat(char *st1, char *st2){
	int i, j = 0;
	// printf("right: %s st2: %s\n", st1, st2);
	char *s = (char*)malloc((strlen(st1) + strlen(st2) + 1) * sizeof(char));
	for(i = 0; i < strlen(st1); i++){
		s[i] = st1[i];
	}
	for(i; i < strlen(st1) + strlen(st2); i++){
		s[i] = st2[j];
		j++;
	}
	s[i] = '\0';
	return s;
}

void setRight(char *r){
	// printf("COND == ");
	// printf("right: %s\n", r);
	strcpy(right[ri++], r);
	// printf("strlen(st1): %d strlen(st2): %d\n", strlen(), strlen(r));
	// right = concat(right, r);
	// right = concat(right, " ");
	printf("END\n");
}

void setLeft(char *l){
	left = (char*)malloc(sizeof(l) * 2);
	strcpy(left, l);
}

void setFunctionName(char *name){
	if(functionName){
		free(functionName);
	}
	// printf("function name: %s\n", name);
	functionName = (char*)malloc(sizeof(name) * 2);
	strcpy(functionName, name);
	// printf("function: %s\n", functionName);
}

void createNode(char *token){
	if(!tree){
		tree = (node*)malloc(sizeof(node));
		tree->token = (char*)malloc(sizeof(token) + 1);
	}
}