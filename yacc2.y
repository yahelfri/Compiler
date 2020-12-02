%{
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>

	typedef struct node
	{
		char *token;
		struct node *left;
		struct node *right;
	} node;
	
	node* mknode(char *token, node *left, node *right);
	void printtree(node *tree);
	int func(char* a, char* b, char *c);
	void printTabs(int n);

	int printlevel = 0;
	int tabs_spaces = 0;
	#define YYSTYPE struct node*
%}

%token BOOLT CHART INTT REALT STRINGT INTP CHARP REALP IF 
	ELSE WHILE VAR FUNC PROC RETURN NULLL MAIN
%token AND DIVIDE ASIGN COMPARE GREATER GREATEREQUAL LESS 
	LESSEQUAL MINUS NOT NOTEQUAL OR PLUS MULTIPLY ADDRESS DEFERENCE 
	INTEGER REAL STRING CHAR BOOLEANTRUE BOOLEANFALSE
%token IDENTIFIER OBLOCK CBLOCK OLIST CLIST ABSOLUTE OINDEX CINDEX
%token COLONS COMMA ENDLINE

%%
//s: s | IDENTIFIER {$$ = $1} | {$$ = NULL};

//s: exp {printtree($1); };
//exp: exp PLUS exp {$$ = mknode("+", $1, $3);}| INTEGER {$$ = mknode(yylval, NULL, NULL);} ;
project: program {printtree($1); };

program: procedure { $$ = mknode("(CODE", $1, mknode(")", NULL, NULL));}| {$$ = NULL;};

procedure: PROC IDENTIFIER OLIST parameters CLIST OBLOCK procedure_body CBLOCK
{
	$$ = mknode("(PROC", mknode($2, NULL, NULL), mknode(")", mknode("", $4, $7), NULL));
};

parameters: para_list {$$ = $1;} | {$$ = NULL;};

para_list: vars COLONS types  {$$ = mknode("(", $3, mknode("", $1, mknode(")", NULL, NULL)));}
	| para_list ENDLINE para_list {$$ = mknode("", $1, mknode("", $3, NULL));};

vars: IDENTIFIER COMMA vars {$$ = mknode($1, mknode(" ", $3, NULL), NULL);}
	| IDENTIFIER {$$ = mknode($1, NULL, NULL);};

types: BOOLT {$$ = mknode("BOOLEAN", NULL, NULL);}
	| CHART {$$ = mknode("CHAR", NULL, NULL);}
	| INTT {$$ = mknode("INTEGER", NULL, NULL);}
	| REALT {$$ = mknode("REAL", NULL, NULL);}
	| STRINGT {$$ = mknode("STRING", NULL, NULL);}
	| INTP {$$ = mknode("INT*", NULL, NULL);}
	| CHARP {$$ = mknode("CHAR*", NULL, NULL);}
	| REALP {$$ = mknode("REAL*", NULL, NULL);};


procedure_body: program declarations statements
{
	$$ = mknode("(BODY", mknode("", $1, NULL), mknode("", $2, mknode("", $3, mknode(")", NULL, NULL))));
};

declarations: declarations declare {$$ = mknode("", $1, $2);} | {$$ = NULL;};

declare: VAR vars COLONS types ENDLINE
{
	$$ = mknode("VAR", $4, $2);
};

statements: statements statment {$$ = mknode("", $1, $2);} | {$$ = NULL;};
 
statment: 
	IF OLIST expression CLIST statment_block
	{
		$$ = mknode("(IF", mknode("(", $3, mknode(")", NULL, NULL)), mknode(")", $5, NULL));
	}
	| IF OLIST expression CLIST statment_block ELSE statment_block
	{
		$$ = mknode("(IF-ELSE", mknode("(", $3, mknode(")", NULL, NULL)), mknode("", $5, mknode(")", $7, NULL)));
	}
	| WHILE OLIST expression CLIST statment_block
	{
		$$ = mknode("(WHILE", mknode("(", $3, mknode(")", NULL, NULL)), mknode(")", $5, NULL));
	}
	| assignment ENDLINE {$$ = mknode("", $1, NULL);}
	| expression ENDLINE {$$ = $1;}
	| block {$$ = $1;};
	/* ADD FOR LOOP */;
statment_block: statment {$$ = $1;} | RETURN expression ENDLINE {$$ = mknode("RET", $2, NULL);};

block: OBLOCK declarations statements return_statement CBLOCK
	{
		$$ = mknode("(BLOCK", $2, mknode("", $3, mknode("", $4, mknode(")", NULL, NULL))));
	};

return_statement: RETURN expression ENDLINE {$$ = mknode("RET", $2, NULL);} | {$$ = NULL;};

assignment: lhs ASIGN expression {$$ = mknode("(=", $1, mknode("(", $3, mknode(")", NULL, NULL)));};

lhs: IDENTIFIER OINDEX expression CINDEX {$$ = mknode($1, mknode("[", $3, mknode("]", NULL, NULL)), NULL);}
	| IDENTIFIER {$$ = mknode($1, NULL, NULL);};
	// ADD DEFERENCE statements

expression: 
	//Logical operators
	expression AND expression {$$ = mknode("&", $1, $3);} 
	| expression OR expression {$$ = mknode("||", $1, $3);}
	| NOT expression {$$ = mknode("!", $2, NULL);}
	//Comparison operators
	| expression COMPARE expression {$$ = mknode("==", $1, $3);}
	| expression NOTEQUAL expression {$$ = mknode("!=", $1, $3);}
	| expression GREATER expression {$$ = mknode(">", $1, $3);}
	| expression LESS expression {$$ = mknode("<", $1, $3);}
	| expression GREATEREQUAL expression {$$ = mknode(">=", $1, $3);}
	| expression LESSEQUAL expression {$$ = mknode("<=", $1, $3);}
	//Arithmetic operatos
	| expression PLUS expression {$$ = mknode("+", $1, $3);}
	| expression MINUS expression {$$ = mknode("-", $1, $3);}
	| expression MULTIPLY expression {$$ = mknode("*", $1, $3);}
	| expression DIVIDE expression {$$ = mknode("/", $1, $3);}
	| expression ABSOLUTE expression 
	{
		$$ = mknode("|", mknode($2, NULL, NULL), mknode("|", NULL, NULL));
	}
	
	/* ADD Pointers and Functions expressions:
		- functions call expression.
		- address(&) expressions.
		- deference(^) expressions.
	*/
	//Arrays operators
	| IDENTIFIER OINDEX expression CINDEX
	{
		$$ = mknode($1, mknode("[", $3, mknode("]", NULL, NULL)), NULL);
	}
	//variables, Constants and NULL 
	| INTEGER {$$ = mknode($1, NULL, NULL);}
	| REAL {$$ = mknode($1, NULL, NULL);}
	| CHAR {$$ = mknode($1, NULL, NULL);}
	| STRING {$$ = mknode($1, NULL, NULL);}
	| BOOLEANTRUE {$$ = mknode($1, NULL, NULL);}
	| BOOLEANFALSE {$$ = mknode($1, NULL, NULL);}
	| IDENTIFIER {$$ = mknode($1, NULL, NULL);}
	| NULLL {$$ = mknode("NULL", NULL, NULL);};


%%
#include "lex.yy.c"
int main()
{
	return yyparse();
}
/* allocate a new node in the tree */
node* mknode(char *token, node *left, node *right)
{
	node* newnode = (node*)malloc(sizeof(node));
	char* newtoken = (char*)malloc(sizeof(token) + 1);
	strcpy(newtoken, token);
	newnode->left = left;
	newnode->right = right;
	newnode->token = newtoken;
	return newnode;
}

/* printing the tree */
void printtree(node* tree)
{
	// printf("%s\n", tree->token);

	//if node has no sons and......
	if(tree && (!tree->left && !tree->right) == 0 && strcmp(tree->token, "(") == 0 ||
		strcmp(tree->token, ")") == 0)){
		printf("%s ", tree->token);
	}else if(strcmp(tree->token, "(CODE") == 0){
		printf("%s\n", tree->token);
		tabs_spaces++;
		printTabs(tabs_spaces);
	} else if(strcmp(tree->token, "(PROC")){
		printf("%s\n", tree->token);
	} else if(strcmp(tree->token, "(ARGS")){
		printf("%s\n", tree->token);
		tabs_spaces++;
		printTabs(tabs_spaces);
	} else if(strcmp(tree->token, "BOOLEAN") == 0 || strcmp(tree->token, "CHAR") == 0 ||
		strcmp(tree->token, "INTEGER") == 0 || strcmp(tree->token, "REAL") == 0 ||
		strcmp(tree->token, "STRING") == 0|| strcmp(tree->token, "INT*") == 0||
		strcmp(tree->token, "CHAR*") == 0|| strcmp(tree->token, "REAL*") == 0){
		printf("%s ", tree->token);
	} else if(strcmp(tree->token, ")")){
		tabs_spaces--;
		printTabs(tabs_spaces);
		printf("%s\n", tree->token);
	} else if(strcmp(tree->token, "(BODY") == 0){
		printf("%s\n", tree->token);
		tabs_spaces++;
		printTabs(tabs_spaces);
	} else if(strcmp(tree->token, ("(IF") == 0) || strcmp(tree->token, "(IF-ELSE") == 0 ||
		strcmp(tree->token, "(WHILE") == 0){
		printf("%s\n", tree->token);
		tabs_spaces++;
		printTabs(tabs_spaces);
	}


	if(tree->left)
	{
		printtree(tree->left);
	}
	if(tree->right)
	{
		printtree(tree->right);
	}
}

void printTabs(int n)
{
	for(int i = 0; i < n; i++){
		printf("	");
	}
}

int yyerror()
{
	printf("ERROR -->[ %s ], in line:%d\n", yytext, yylineno);
	return 0;
}

int func(char* a, char* b, char *c)
{
	printf("from func: \n");
	printf("a = %s\n", a);
	printf("b = %s\n", b);
	printf("c = %p\n", c);
	return 0;
}