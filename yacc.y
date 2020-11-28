%{
	#include<stdio.h>
	#include<string.h>
	#include<stdlid.h>

	typedef struct node
	{
		char *token;
		struct node *left;
		struct node *right;
	} node;
	
	node* mknode(char *node, node *left, node *right);
	void printtree(node *tree);
	#define YYSTYPE struc node*;
%}

%token BOOLT CHART INTT REALT STRINGT INTP CHARP REALP IF ELSE WHILE VAR FUNC PROC RETURN NULL MAIN
%token AND DIVIDE ASIGN COMPARE GREATER GREATEREQUAL LESS LESSEQUAL MINUS NOT NOTEQUAL OR PLUS MULTIPLY ADDRESS DEFERENCE
%token ENDLINE COLONS COMMA ABSOLUTE OBLOCK CBLOCK OLIST CLIST OINDIX CINDEX
%token BOOLEAN CHAR INTEGER REAL STRING COMMENT IDENTIFIER

%left PLUS MINUS RETURN
%left MULTIPLY DIVIDE
%left COMPARE GREATER GREATEREUAL LESS LESSEQUAL NOTEQUAL OR AND
%left ENDLINE

%%
program: procedure { $$ = mknoode("CODE", $1, $2);}

//procedure GRAMMER
procedure: PROC IDENTIFIER OLIST parameters CLIST OBLOCK procedure_body CBLOCK
{
	$$ = mknode("PROC", mknode("\n", NULL, NULL), mknode($2, mknode("ARGS", $4, NULL)));
}
//procedure/function parameters can be empty
parameters: para_list {$$ = $1;} | {$$ = NULL;};
para_list: vars COLONS types {$$ = mknode()}
%%