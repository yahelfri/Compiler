%{
	//#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include "part2.h";

	typedef struct node
	{
		char *token;
		struct node *left;
		struct node *right;
	} node;
	
	node* mknode(char *token, node *left, node *right);
	void printtree(node *tree);
	void printTabs(int n);

	int level = 0;
	#define YYSTYPE struct node*
%}

%token BOOLT CHART INTT REALT STRINGT INTP CHARP REALP IF 
	ELSE WHILE VAR FUNC PROC RETURN NULLL MAIN
%token AND DIVIDE ASIGN COMPARE GREATER GREATEREQUAL LESS 
	LESSEQUAL MINUS NOT NOTEQUAL OR PLUS MULTIPLY ADDRESS DEFERENCE 
	INTEGER REAL STRING CHAR BOOLEANTRUE BOOLEANFALSE
%token IDENTIFIER OBLOCK CBLOCK OLIST CLIST ABSOLUTE OINDEX CINDEX
%token COLONS COMMA ENDLINE COMMENT
%%
project: comment pushEndSign program {printGlobal();checkMain();printErrors();};

pushEndSign: {pushEndSign("$$");};

program: procedures {($$ = mknode("CODE", $1, NULL));};
 
//main: PROC MAIN OLIST CLIST OBLOCK pushScope procedure_body CBLOCK 
//{
//	setScope("MAIN", "PROC", "NULL");
//	$$ = mknode("PROC", mknode("MAIN", mknode("\n", NULL, NULL), NULL), mknode("ARGS", NULL, $6));
//};

procedures: procedures procedure procedure_body comment  {$$ = mknode("", $1, $2);} | {$$ = NULL;};

procedure: PROC IDENTIFIER pushScope OLIST parameters CLIST OBLOCK procedure_body CBLOCK 
{
	//addProcFunc($2, "procedure");
	setScope($2, "procedure", "NULL");
	$$ = mknode("PROC", mknode($2, mknode("\n",  NULL, NULL), NULL), mknode("ARGS", $4, $7));
} | FUNC IDENTIFIER pushScope OLIST parameters CLIST comment RETURN retTypes OBLOCK  procedure_body return_statement CBLOCK 
{
	//addProcFunc($2, "function");
	setScope($2, "function", $8->token);
	$$ = mknode("FUNC", mknode($2, mknode("\n", NULL, NULL),
	 mknode("ARGS", $4, mknode("RET", $8, NULL))), mknode("", $10, $11));
};

pushScope: {pushNewScope();};

//popScope: {pop();};

parameters: para_list {$$ = $1;} | {$$ = NULL;};

para_list: argsVars COLONS argsTypes  {$$ = mknode("(", $3, mknode("", $1, mknode(")", NULL, NULL)));}
	| para_list ENDLINE comment para_list {$$ = mknode("", $1, mknode("", $4, NULL));};

argsVars: IDENTIFIER COMMA argsVars {$$ = mknode($1, mknode(" ", $3, NULL), NULL);addArgVar($1);}
	| IDENTIFIER {$$ = mknode($1, NULL, NULL);addArgVar($1);};

vars: IDENTIFIER COMMA vars {$$ = mknode($1, mknode(" ", $3, NULL), NULL);addVar( $1);}
	| IDENTIFIER {$$ = mknode($1, NULL, NULL);addVar($1);};

retTypes: BOOLT {$$ = mknode("BOOLEAN", NULL, NULL); setRetType("BOOLEAN");}
	| CHART {$$ = mknode("CHAR", NULL, NULL);setRetType("CHAR");}
	| INTT {$$ = mknode("INTEGER", NULL, NULL);setRetType("INTEGER");}
	| REALT {$$ = mknode("REAL", NULL, NULL);setRetType("REAL");}
	| STRINGT {$$ = mknode("STRING", NULL, NULL);setRetType("STRING");}
	| INTP {$$ = mknode("INT*", NULL, NULL);setRetType("INT*");}
	| CHARP {$$ = mknode("CHAR*", NULL, NULL);setRetType("CHAR*");}
	| REALP {$$ = mknode("REAL*", NULL, NULL);setRetType("REAL*");};

argsTypes: BOOLT {$$ = mknode("BOOLEAN", NULL, NULL); setArgsType("BOOLEAN");}
	| CHART {$$ = mknode("CHAR", NULL, NULL);setArgsType("CHAR");}
	| INTT {$$ = mknode("INTEGER", NULL, NULL);setArgsType("INTEGER");}
	| REALT {$$ = mknode("REAL", NULL, NULL);setArgsType("REAL");}
	| STRINGT {$$ = mknode("STRING", NULL, NULL);setArgsType("STRING");}
	| INTP {$$ = mknode("INT*", NULL, NULL);setArgsType("INT*");}
	| CHARP {$$ = mknode("CHAR*", NULL, NULL);setArgsType("CHAR*");}
	| REALP {$$ = mknode("REAL*", NULL, NULL);setArgsType("REAL*");};

types: BOOLT {$$ = mknode("BOOLEAN", NULL, NULL); setVarType("BOOLEAN");}
	| CHART {$$ = mknode("CHAR", NULL, NULL);setVarType("CHAR");}
	| INTT {$$ = mknode("INTEGER", NULL, NULL);setVarType("INTEGER");}
	| REALT {$$ = mknode("REAL", NULL, NULL);setVarType("REAL");}
	| STRINGT {$$ = mknode("STRING", NULL, NULL);setVarType("STRING");}
	| INTP {$$ = mknode("INT*", NULL, NULL);setVarType("INT*");}
	| CHARP {$$ = mknode("CHAR*", NULL, NULL);setVarType("CHAR*");}
	| REALP {$$ = mknode("REAL*", NULL, NULL);setVarType("REAL*");};

comment: COMMENT comment | ;

procedure_body: comment procedures declarations statements procedures
{
	$$ = mknode("(BODY\n", mknode("", $2, NULL), mknode("", $3, mknode("", $4, mknode("}", NULL, NULL))));
};

declarations: declarations declare {$$ = mknode("", $1, $2);} | {$$ = NULL;};

declare: VAR vars COLONS types comment ENDLINE comment
{
	$$ = mknode("VAR", $4, $2);	
} | VAR vars COLONS types OINDEX expression CINDEX ENDLINE {$$ = mknode("VAR", $2, mknode("[", $6, mknode("]", NULL, NULL)));};

statements: statements statment {$$ = mknode("", $1, $2);} | {$$ = NULL;};
 
statment: 
	IF OLIST expression CLIST statment_block
	{
		$$ = mknode("IF", mknode("(", $3, mknode(")", NULL, NULL)), $5);
	}
	| IF OLIST expression CLIST statment_block ELSE statment_block
	{
		$$ = mknode("IF-ELSE", mknode("(", $3, mknode(")", NULL, NULL)), mknode("", $5, mknode("", $7, NULL)));
	}
	| WHILE comment OLIST expression CLIST statment_block
	{
		$$ = mknode("WHILE", mknode("(", $4, mknode(")", NULL, NULL)), $6);
	}
	| assignment ENDLINE comment {$$ = mknode("", $1, NULL);}
	| expression ENDLINE comment {$$ = $1;}
	| block {$$ = $1;};

statment_block: statment {$$ = $1;} | RETURN expression ENDLINE {$$ = mknode("RET", $2, NULL);};

block: OBLOCK comment declarations statements return_statement CBLOCK comment
	{
		$$ = mknode("{", $3, mknode("", $4, mknode("", $5, mknode("}", NULL, NULL))));
	};

return_statement: RETURN expression ENDLINE comment {$$ = mknode("RET", $2, NULL);} | {$$ = NULL;};

assignment: lhs ASIGN expression {$$ = mknode("=", $1, $3);};

lhs: IDENTIFIER OINDEX expression CINDEX {$$ = mknode($1, mknode("[", $3, mknode("]", NULL, NULL)), NULL);}
	| IDENTIFIER {$$ = mknode($1, NULL, NULL);}
	| deference_statement {$$ = $1;};

expression: 
	OLIST expression CLIST {$$ = mknode("(", $2, mknode(")", NULL, NULL));}
	//Logical operators
	| expression AND expression {$$ = mknode("&&", $1, $3);} 
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
	| address_expression {$$ = $1;}
	| deference_statement {$$ = $1;}
	| function_call comment {$$ = $1;}
	//Arrays operators
	| IDENTIFIER OINDEX expression CINDEX
	{
		$$ = mknode($1, mknode("[", $3, mknode("]", NULL, NULL)), NULL);
	}
	//variables, Constants and NULL 
	| INTEGER {$$ = mknode($1, NULL, NULL);addFuncProcCallArgs("INTEGER");}
	| REAL {$$ = mknode($1, NULL, NULL);addFuncProcCallArgs("REAL");}
	| CHAR {$$ = mknode($1, NULL, NULL);addFuncProcCallArgs("CHAR");}
	| STRING {$$ = mknode($1, NULL, NULL);addFuncProcCallArgs("STRING");}
	| BOOLEANTRUE {$$ = mknode($1, NULL, NULL);addFuncProcCallArgs("BOOLEANTRUE");}
	| BOOLEANFALSE {$$ = mknode($1, NULL, NULL);addFuncProcCallArgs("BOOLEANFALSE");}
	| IDENTIFIER {$$ = mknode($1, NULL, NULL);addFuncProcCallArgs($1);}
	| NULLL {$$ = mknode("NULL", NULL, NULL);addFuncProcCallArgs("NULL");};

address_expression: ADDRESS address_expression {$$ = mknode($1, $2, NULL);} | address {$$ = $1;};

address: ADDRESS IDENTIFIER {$$ = mknode("&", mknode($2, NULL, NULL), NULL);}
	| ADDRESS OLIST IDENTIFIER CLIST {$$ = mknode("&", mknode("(", mknode($3, NULL, NULL), NULL), mknode(")", NULL, NULL));}
	| ADDRESS IDENTIFIER OINDEX expression CINDEX {$$ = mknode("&", mknode($2, NULL, NULL), mknode("[", $4, mknode("]", NULL, NULL)));}
	| ADDRESS OLIST IDENTIFIER OINDEX expression CINDEX CLIST {$$ = mknode("&", mknode("(", mknode($3, NULL, NULL), mknode("[", $5, NULL)), mknode("]", NULL, mknode(")", NULL, NULL)));};

deference_statement: DEFERENCE IDENTIFIER {$$ = mknode("^", mknode($2, NULL, NULL), NULL);}
	| DEFERENCE OLIST expression CLIST {$$ = mknode("^", mknode("(", $3, NULL), mknode(")", NULL, NULL));}
	| DEFERENCE IDENTIFIER OINDEX expression CINDEX {$$ = mknode($1, mknode($2, NULL, NULL), mknode("[", $4, mknode("]", NULL, NULL)));};

function_call: IDENTIFIER call_expression {$$ = mknode("FUNC_CALL", mknode($1, NULL, NULL), mknode("ARGS", $2, NULL));
	};

call_expression: OLIST call_expression_args CLIST {$$ = $2;};

call_expression_args: expression COMMA call_expression_args {$$ = mknode("", $1, mknode(",", $3, NULL));}
	| expression {$$ = mknode("", $1, NULL);} | {$$ = NULL;};

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
	int flag = 4;
	printTabs(level);
	if(strcmp(tree->token, "VAR") == 0){
		printf("(DECLARE ");
		flag = 2;
	} else if(strcmp(tree->token, "IF") == 0){
		printf("(IF\n");
		flag = 1;
	} else if(strcmp(tree->token, "WHILE") == 0){
		printf("(WHILE\n");
		flag = 1;
	} else if(strcmp(tree->token, "FUNC") == 0 || strcmp(tree->token, "PROC") == 0 ||
		strcmp(tree->token, "PROC") == 0 || strcmp(tree->token, "CODE") == 0 ||
		strcmp(tree->token, "FUNC_CALL") == 0){
		printf("%s\n", tree->token);
		flag = 2;
	} else if(strcmp(tree->token, "ARGS") == 0){
		printf("(ARGS ");
		if(tree->left){
			flag = 2;
			printf("\n");
		} else {
			printf("NONE)\n");
		}
	} else if(strcmp(tree->token, "IF-ELSE") == 0){
		printf("(IF-ELSE\n");
		level--;
		flag = 1;
	} else if(strcmp(tree->token, "RET") == 0){
		printf("(RET ");
		flag = 2;
	} else if(strcmp(tree->token, "{") == 0){
		printf("(BLOCK\n");
	} else if(strcmp(tree->token, "}") == 0){
		printf(")\n");
	// else if(strcmp(tree->token, "") == 0){

	// }	
	} else if(strcmp(tree->token, "(") == 0){
		printf("(");
	} else if(strcmp(tree->token, "\n") == 0){
		printf("\n");
	} else if(strcmp(tree->token, ")") == 0){
		printf(")\n");
	} else if(strcmp(tree->token, ",") == 0){
		printf(",");
	} else if(strcmp(tree->token, "!=") == 0 || strcmp(tree->token, "=") == 0 ||
		strcmp(tree->token, "==") == 0 || strcmp(tree->token, ">") == 0 ||
		strcmp(tree->token, "<") == 0 || strcmp(tree->token, ">=") == 0 ||
		strcmp(tree->token, "<=") == 0 || strcmp(tree->token, "!") == 0 ||
		strcmp(tree->token, "&&") == 0 || strcmp(tree->token, "||") == 0 ||
		strcmp(tree->token, "+") == 0 || strcmp(tree->token, "-") == 0 ||
		strcmp(tree->token, "*") == 0 || strcmp(tree->token, "/") == 0 ||
		strcmp(tree->token, "&") == 0 || strcmp(tree->token, "^") == 0 ||
		strcmp(tree->token, "|") == 0){
		printf("(%s", tree->token);
		if(strcmp(tree->token, "=") == 0){
			flag = 0;
		} else {
			flag = 1;
		}
	} else {
		if(tree && (!tree->left && !tree->right) || strcmp(tree->token, "MAIN") == 0){
			printf("%s ", tree->token);
		} else {
			level++;
			printf("%s", tree->token);
			level--;
		}
	}
	if(tree->left){
		level++;
		printtree(tree->left);
		level--;
	}
	if(tree->right){
		level++;
		printtree(tree->right);
		level--;
	}
	if(flag == 2){
		printf(")\n");
	}
	if(flag == 1){
		printf(")");
	}
	if(flag == 0){
		printf("\n)");
	}
}

void printTabs(int n)
{ 
	for(int i = 0; i < n/3; i++){
		printf(" ");
	}
}

int yyerror(char *err)
{
	int yydebug = 1; 
	fflush(stdout);
	fprintf(stderr, "Error: %s\n" , err);
	fprintf(stderr, "missing a char before '%s' at line %d\n", yytext, yylineno);
	return 0;
}