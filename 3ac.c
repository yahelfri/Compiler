#include "3ac.h"
#include <stdio.h>

char *currentFunc;
char *fileString;

char *concat(char *st1, char *st2){
	int i, j = 0;
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

void printFunc(char *funcName){
	currentFunc = concat(charToStr('\t'), concat(funcName, ":\n"));
	if(fileString == NULL){
		fileString = currentFunc;
	} else {
		fileString = concat(fileString, currentFunc);
	}
}

void writeStringToFile(){
	printf("write string to file\n");
	printf("%s\n", fileString);
	// FILE *fp = fopen("outputA.txt", "W");
	
	// if(fp){
	// 	printf("file open\n");
	// 	fprintf(fp, "%s",  fileString);
	// 	fclose(fp);
	// }
}

char *charToStr(char tav){
	char *s = (char*)malloc(sizeof(char) * 2);
	s[0] = tav;
	s[1] = '\0';
	return s;
}