#include "part3.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


node *tree;
int t_index = 0;
char *functionName;
char right[100][100];
int ri = 0;
// char *left;

char *left;


void printCode(){
	// printf("size: %d\n", ri);
	// for(int i = 0; i < ri; i++){
	// 	printf("%s", right[i]);
	// }
	// printf("\n");
	printf("t%d = ", t_index);
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
	printf("\n%s = t%d\n", left, t_index++);
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
	strcpy(right[ri++], r);
	// printf("strlen(st1): %d strlen(st2): %d\n", strlen(), strlen(r));
	// right = concat(right, r);
	// right = concat(right, " ");
}

void setLeft(char *l){
	left = (char*)malloc(sizeof(l) + 1);
	strcpy(left, l);
}

void setFunctionName(char *name){
	functionName = (char*)malloc(sizeof(name) + 1);
	strcpy(functionName, name);
}

void createNode(char *token){
	if(!tree){
		tree = (node*)malloc(sizeof(node));
		tree->token = (char*)malloc(sizeof(token) + 1);
	}
}