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

	int level = 0;
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
project:  pushEndSign program {/*checkMain();checkFuncProcName();printErrors();*/};

pushEndSign: {pushEndSign("$$");};

program: procedures {($$ = mknode("CODE", $1, NULL));};

procedures: procedures procedure  {$$ = mknode("", $1, $2);} | {$$ = NULL;};

procedure: PROC pushScope OLIST parameters CLIST OBLOCK procedure_body CBLOCK
{
	popScope("procedure");
	$$ = mknode("PROC", mknode($2, mknode("\n",  NULL, NULL), NULL), mknode("ARGS", $4, $7));
} | FUNC pushScope OLIST parameters CLIST  RETURN ret_types OBLOCK procedure_body return_statement CBLOCK
{
	popScope("function");
	$$ = mknode("FUNC", mknode($2, mknode("\n", NULL, NULL), 
		mknode("ARGS", $4, mknode("RET", $8, NULL))), mknode("", $10, $11));
};

pushScope: IDENTIFIER {pushNewScope($1);setFunctionName($1);};
	

parameters: para_list {$$ = $1;} | {$$ = NULL;};

para_list: argVars COLONS argsTypes  {$$ = mknode("(", $3, mknode("", $1, mknode(")", NULL, NULL)));}
	| para_list ENDLINE  para_list {$$ = mknode("", $1, mknode("", $3, NULL));};


argVars: IDENTIFIER COMMA argVars {$$ = mknode($1, mknode(" ", $3, NULL), NULL);addArgVar($1);}
	| IDENTIFIER {$$ = mknode($1, NULL, NULL);addArgVar($1);};

vars: IDENTIFIER COMMA vars {$$ = mknode($1, mknode(" ", $3, NULL), NULL);addVar($1);}
	| IDENTIFIER {$$ = mknode($1, NULL, NULL);addVar($1);};

argsTypes: BOOLT {$$ = mknode("BOOLEAN", NULL, NULL);setArgType("BOOLEAN");}
	| CHART {$$ = mknode("CHAR", NULL, NULL);setArgType("CHAR");}
	| INTT {$$ = mknode("INTEGER", NULL, NULL);setArgType("INTEGER");}
	| REALT {$$ = mknode("REAL", NULL, NULL);setArgType("REAL");}
	| STRINGT {$$ = mknode("STRING", NULL, NULL);setArgType("STRING");}
	| INTP {$$ = mknode("INT*", NULL, NULL);setArgType("INT*");}
	| CHARP {$$ = mknode("CHAR*", NULL, NULL);setArgType("CHAR*");}
	| REALP {$$ = mknode("REAL*", NULL, NULL);setArgType("REAL*");};

types: BOOLT {$$ = mknode("BOOLEAN", NULL, NULL);setVarType("BOOLEAN");}
	| CHART {$$ = mknode("CHAR", NULL, NULL);setVarType("CHAR");}
	| INTT {$$ = mknode("INTEGER", NULL, NULL);setVarType("INTEGER");}
	| REALT {$$ = mknode("REAL", NULL, NULL);setVarType("REAL");}
	| STRINGT {$$ = mknode("STRING", NULL, NULL);setVarType("STRING");}
	| INTP {$$ = mknode("INT*", NULL, NULL);setVarType("INT*");}
	| CHARP {$$ = mknode("CHAR*", NULL, NULL);setVarType("CHAR*");}
	| REALP {$$ = mknode("REAL*", NULL, NULL);setVarType("REAL*");};

str_types: BOOLT {$$ = mknode("BOOLEAN", NULL, NULL);checkStrType("BOOLEAN");}
	| CHART {$$ = mknode("CHAR", NULL, NULL);checkStrType("CHAR");}
	| INTT {$$ = mknode("INTEGER", NULL, NULL);checkStrType("INTEGER");}
	| REALT {$$ = mknode("REAL", NULL, NULL);checkStrType("REAL");}
	| STRINGT {$$ = mknode("STRING", NULL, NULL);checkStrType("STRING");}
	| INTP {$$ = mknode("INT*", NULL, NULL);checkStrType("INT*");}
	| CHARP {$$ = mknode("CHAR*", NULL, NULL);checkStrType("CHAR*");}
	| REALP {$$ = mknode("REAL*", NULL, NULL);checkStrType("REAL*");};

procedure_body:  procedures declarations statements 
{
	$$ = mknode("(BODY\n", mknode("", $1, NULL), mknode("", $2, mknode("", $3, mknode("}", NULL, NULL))));
};

declarations: declarations declare {$$ = mknode("", $1, $2);} | {$$ = NULL;};

declare: VAR vars COLONS types  ENDLINE 
{
	$$ = mknode("VAR", $4, $2);			
} | VAR vars COLONS str_types OINDEX str_expression CINDEX ENDLINE {$$ = mknode("VAR", $2, mknode("[", $6, mknode("]", NULL, NULL)));};

statements: statements statment {$$ = mknode("", $1, $2);} | {$$ = NULL;};
 
statment: 
	IF OLIST stmnt_expression CLIST statment_block
	{
		checkCondition();
		$$ = mknode("IF", mknode("(", $3, mknode(")", NULL, NULL)), $5);
	}
	| IF OLIST stmnt_expression CLIST statment_block ELSE statment_block
	{
		$$ = mknode("IF-ELSE", mknode("(", $3, mknode(")", NULL, NULL)), mknode("", $5, mknode("", $7, NULL)));
	}
	| WHILE  OLIST stmnt_expression CLIST statment_block
	{
		checkCondition();
		
	}
	| assignment ENDLINE  {$$ = mknode("", $1, NULL);clearFuncName();}
	| expression ENDLINE  {$$ = $1;}
	| block {$$ = $1;};

statment_block: statment {$$ = $1;} | RETURN expression ENDLINE {$$ = mknode("RET", $2, NULL);};

block: OBLOCK  declarations statements return_statement CBLOCK 
	{
		$$ = mknode("{", $3, mknode("", $4, mknode("", $5, mknode("}", NULL, NULL))));
	};

return_statement: RETURN ret_expression ENDLINE  {$$ = mknode("RET", $2, NULL);} | {$$ = NULL;};

ret_types: BOOLT {$$ = mknode("BOOLEAN", NULL, NULL);addReturnType("BOOLEAN");}
	| CHART {$$ = mknode("CHAR", NULL, NULL);addReturnType("CHAR");}
	| INTT {$$ = mknode("INTEGER", NULL, NULL);addReturnType("INTEGER");}
	| REALT {$$ = mknode("REAL", NULL, NULL);addReturnType("REAL");}
	| STRINGT {$$ = mknode("STRING", NULL, NULL);addReturnType("STRING");}
	| INTP {$$ = mknode("INT*", NULL, NULL);addReturnType("INT*");}
	| CHARP {$$ = mknode("CHAR*", NULL, NULL);addReturnType("CHAR*");}
	| REALP {$$ = mknode("REAL*", NULL, NULL);addReturnType("REAL*");};

assignment: lhs ASIGN function_call  {$$ = mknode("=", $1, $3);addVarAssign($1->token);} 
	| lhs ASIGN expr {$$ = mknode("=", $1, $3);checkLeftRight();printCode();};

lhs: IDENTIFIER OINDEX str_expression CINDEX {$$ = mknode($1, mknode("[", $3, mknode("]", NULL, NULL)), NULL);}
	| IDENTIFIER {$$ = mknode($1, NULL, NULL);addLeft($1);setLeft($1);};

str_expression: OLIST str_expression CLIST {$$ = mknode("(", $2, mknode(")", NULL, NULL));}
	//Logical operators
	| str_expression AND str_expression {$$ = mknode("&&", $1, $3);} 
	| str_expression OR str_expression {$$ = mknode("||", $1, $3);}
	| NOT str_expression {$$ = mknode("!", $2, NULL);}
	//Comparison operators
	| str_expression COMPARE str_expression {$$ = mknode("==", $1, $3);}
	| str_expression NOTEQUAL str_expression {$$ = mknode("!=", $1, $3);}
	| str_expression GREATER str_expression {$$ = mknode(">", $1, $3);}
	| str_expression LESS str_expression {$$ = mknode("<", $1, $3);}
	| str_expression GREATEREQUAL str_expression {$$ = mknode(">=", $1, $3);}
	| str_expression LESSEQUAL str_expression {$$ = mknode("<=", $1, $3);}
	//Arithmetic operatos
	| str_expression PLUS str_expression {$$ = mknode("+", $1, $3);}
	| str_expression MINUS str_expression {$$ = mknode("-", $1, $3);}
	| str_expression MULTIPLY str_expression {$$ = mknode("*", $1, $3);}
	| str_expression DIVIDE str_expression {$$ = mknode("/", $1, $3);}
	| str_expression ABSOLUTE str_expression 
	{
		$$ = mknode("|", mknode($2, NULL, NULL), mknode("|", NULL, NULL));
	}
	| address_expression {$$ = $1;}
	| deference_statement {$$ = $1;}
	| function_call  {$$ = $1;}
	//Arrays operators
	| IDENTIFIER OINDEX str_expression CINDEX
	{
		$$ = mknode($1, mknode("[", $3, mknode("]", NULL, NULL)), NULL);
	}
	//variables, Constants and NULL 
	| INTEGER {$$ = mknode($1, NULL, NULL); checkStringType("INTEGER");}
	| REAL {$$ = mknode($1, NULL, NULL); checkStringType("REAL");}
	| CHAR {$$ = mknode($1, NULL, NULL); checkStringType("CHAR");}
	| STRING {$$ = mknode($1, NULL, NULL); checkStringType("STRING");}
	| BOOLEANTRUE {$$ = mknode($1, NULL, NULL); checkStringType("BOOLEAN");}
	| BOOLEANFALSE {$$ = mknode($1, NULL, NULL); checkStringType("BOOLEAN");}
	| IDENTIFIER {$$ = mknode($1, NULL, NULL);checkStringType("IDENTIFIER");}
	| NULLL {$$ = mknode("NULL", NULL, NULL);};

ret_expression: OLIST ret_expression CLIST {$$ = mknode("(", $2, mknode(")", NULL, NULL));}
	//Logical operators
	| ret_expression AND ret_expression {$$ = mknode("&&", $1, $3);} 
	| ret_expression OR ret_expression {$$ = mknode("||", $1, $3);}
	| NOT ret_expression {$$ = mknode("!", $2, NULL);}
	//Comparison operators
	| ret_expression COMPARE ret_expression {$$ = mknode("==", $1, $3);}
	| ret_expression NOTEQUAL ret_expression {$$ = mknode("!=", $1, $3);}
	| ret_expression GREATER ret_expression {$$ = mknode(">", $1, $3);}
	| ret_expression LESS ret_expression {$$ = mknode("<", $1, $3);}
	| ret_expression GREATEREQUAL ret_expression {$$ = mknode(">=", $1, $3);}
	| ret_expression LESSEQUAL ret_expression {$$ = mknode("<=", $1, $3);}
	//Arithmetic operatos
	| ret_expression PLUS ret_expression {$$ = mknode("+", $1, $3);}
	| ret_expression MINUS ret_expression {$$ = mknode("-", $1, $3);}
	| ret_expression MULTIPLY ret_expression {$$ = mknode("*", $1, $3);}
	| ret_expression DIVIDE ret_expression {$$ = mknode("/", $1, $3);}
	| ret_expression ABSOLUTE ret_expression 
	{
		$$ = mknode("|", mknode($2, NULL, NULL), mknode("|", NULL, NULL));
	}
	| address_expression {$$ = $1;}
	| deference_statement {$$ = $1;}
	| function_call  {$$ = $1;}
	//Arrays operators
	| IDENTIFIER OINDEX ret_expression CINDEX
	{
		$$ = mknode($1, mknode("[", $3, mknode("]", NULL, NULL)), NULL);
	}
	//variables, Constants and NULL 
	| INTEGER {$$ = mknode($1, NULL, NULL); checkReturn("INTEGER");}
	| REAL {$$ = mknode($1, NULL, NULL); checkReturn("REAL");}
	| CHAR {$$ = mknode($1, NULL, NULL); checkReturn("CHAR");}
	| STRING {$$ = mknode($1, NULL, NULL); checkReturn("STRING");}
	| BOOLEANTRUE {$$ = mknode($1, NULL, NULL); checkReturn("BOOLEAN");}
	| BOOLEANFALSE {$$ = mknode($1, NULL, NULL); checkReturn("BOOLEAN");}
	| IDENTIFIER {$$ = mknode($1, NULL, NULL); checkReturn($1);}
	| NULLL {$$ = mknode("NULL", NULL, NULL);};

stmnt_expression:
	OLIST stmnt_expression CLIST {$$ = mknode("(", $2, mknode(")", NULL, NULL));}
	//Logical operators
	| stmnt_expression AND stmnt_expression {$$ = mknode("&&", $1, $3);logiaclOperator("AND");} 
	| stmnt_expression OR stmnt_expression {$$ = mknode("||", $1, $3);logiaclOperator("OR");}
	| NOT stmnt_expression {$$ = mknode("!", $2, NULL);logiaclOperator("NOT");}
	//Comparison operators
	| stmnt_expression COMPARE stmnt_expression {$$ = mknode("==", $1, $3);operatorisHere("COMPARE");}
	| stmnt_expression NOTEQUAL stmnt_expression {$$ = mknode("!=", $1, $3);operatorisHere("NOTEQUAL");}
	| stmnt_expression GREATER stmnt_expression {$$ = mknode(">", $1, $3);operatorisHere("GREATER");}
	| stmnt_expression LESS stmnt_expression {$$ = mknode("<", $1, $3);operatorisHere("LESS");}
	| stmnt_expression GREATEREQUAL stmnt_expression {$$ = mknode(">=", $1, $3);operatorisHere("GREATEREQUAL");}
	| stmnt_expression LESSEQUAL stmnt_expression {$$ = mknode("<=", $1, $3);operatorisHere("LESSEQUAL");}
	//Arithmetic operatos
	| stmnt_expression PLUS stmnt_expression {$$ = mknode("+", $1, $3);}
	| stmnt_expression MINUS stmnt_expression {$$ = mknode("-", $1, $3);}
	| stmnt_expression MULTIPLY stmnt_expression {$$ = mknode("*", $1, $3);}
	| stmnt_expression DIVIDE stmnt_expression {$$ = mknode("/", $1, $3);}
	| stmnt_expression ABSOLUTE stmnt_expression 
	{
		$$ = mknode("|", mknode($2, NULL, NULL), mknode("|", NULL, NULL));
	}
	| ABSOLUTE stmnt_expression ABSOLUTE
	| address_expression {$$ = $1;}
	| deference_statement {$$ = $1;}
	| function_call  {$$ = $1;}
	//Arrays operators
	| IDENTIFIER OINDEX stmnt_expression CINDEX
	{
		$$ = mknode($1, mknode("[", $3, mknode("]", NULL, NULL)), NULL);
	}
	//variables, Constants and NULL 
	| INTEGER {$$ = mknode($1, NULL, NULL);checkExpressionISBool($1,"INTEGER");}
	| REAL {$$ = mknode($1, NULL, NULL); checkExpressionISBool($1,"REAL");}
	| CHAR {$$ = mknode($1, NULL, NULL);checkExpressionISBool($1,"CHAR");}
	| STRING {$$ = mknode($1, NULL, NULL);checkExpressionISBool($1,"STRING");}
	| BOOLEANTRUE {$$ = mknode($1, NULL, NULL);checkExpressionISBool($1,"BOOLEANTRUE");}
	| BOOLEANFALSE {$$ = mknode($1, NULL, NULL);checkExpressionISBool($1,"BOOLEANFALSE");}
	| IDENTIFIER {$$ = mknode($1, NULL, NULL);checkExpressionISBool($1,"IDENTIFIER");}
	| NULLL {$$ = mknode("NULL", NULL, NULL);};

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
	| function_call  {$$ = $1;}
	//Arrays operators
	| IDENTIFIER OINDEX expression CINDEX
	{
		$$ = mknode($1, mknode("[", $3, mknode("]", NULL, NULL)), NULL);
	}
	//variables, Constants and NULL 
	| INTEGER {$$ = mknode($1, NULL, NULL);addFuncCallArgType($1, "INTEGER");}
	| REAL {$$ = mknode($1, NULL, NULL); addFuncCallArgType($1, "REAL");}
	| CHAR {$$ = mknode($1, NULL, NULL);addFuncCallArgType($1, "CHAR");}
	| STRING {$$ = mknode($1, NULL, NULL);addFuncCallArgType($1, "STRING");}
	| BOOLEANTRUE {$$ = mknode($1, NULL, NULL);addFuncCallArgType($1, "BOOLEANTRUE");}
	| BOOLEANFALSE {$$ = mknode($1, NULL, NULL);addFuncCallArgType($1, "BOOLEANFALSE");}
	| IDENTIFIER {$$ = mknode($1, NULL, NULL);addFuncCallArgType($1, NULL);}
	| NULLL {$$ = mknode("NULL", NULL, NULL);};

expr: 
	OLIST expr CLIST {$$ = mknode("(", $2, mknode(")", NULL, NULL));}
	//Logical operators
	| expr AND expr {$$ = mknode("&&", $1, $3);} 
	| expr OR expr {$$ = mknode("||", $1, $3);}
	| NOT expr {$$ = mknode("!", $2, NULL);addOperator("!");}
	//Comparison operators
	| expr COMPARE expr {$$ = mknode("==", $1, $3);}
	| expr NOTEQUAL expr {$$ = mknode("!=", $1, $3);}
	| expr GREATER expr {$$ = mknode(">", $1, $3);}
	| expr LESS expr {$$ = mknode("<", $1, $3);}
	| expr GREATEREQUAL expr {$$ = mknode(">=", $1, $3);}
	| expr LESSEQUAL expr {$$ = mknode("<=", $1, $3);}
	//Arithmetic operatos
	| expr PLUS expr {$$ = mknode("+", $1, $3);addOperator("+");setRight("+");}
	| expr MINUS expr {$$ = mknode("-", $1, $3);addOperator("-");setRight("-");}
	| expr MULTIPLY expr {$$ = mknode("*", $1, $3);addOperator("*");setRight("*");}
	| expr DIVIDE expr {$$ = mknode("/", $1, $3);addOperator("/");setRight("/");}
	| ABSOLUTE expr ABSOLUTE  {$$ = mknode("/", $1, $3);addOperator("/");setRight("|");}
	{
		$$ = mknode("|", mknode($2, NULL, NULL), mknode("|", NULL, NULL));
	}
	| address_expression {$$ = $1;}
	| deference_statement  {$$ = $1;}
	| function_call  {$$ = $1;}
	//Arrays operators
	| IDENTIFIER OINDEX expr CINDEX
	{
		$$ = mknode($1, mknode("[", $3, mknode("]", NULL, NULL)), NULL);
	}
	//variables, Constants and NULL 
	| INTEGER {$$ = mknode($1, NULL, NULL);addRightVar("INTEGER", NULL);setRight($1);} 
	| REAL {$$ = mknode($1, NULL, NULL);addRightVar("REAL", NULL);setRight($1);}
	| CHAR {$$ = mknode($1, NULL, NULL);addRightVar("CHAR", NULL);setRight($1);}
	| STRING {$$ = mknode($1, NULL, NULL);addRightVar("STRING", NULL);setRight($1);}
	| BOOLEANTRUE {$$ = mknode($1, NULL, NULL);addRightVar("BOOLEAN", NULL);setRight($1);}
	| BOOLEANFALSE {$$ = mknode($1, NULL, NULL);addRightVar("BOOLEAN", NULL);setRight($1);}
	| IDENTIFIER {$$ = mknode($1, NULL, NULL);addRightVar("IDENTIFIER", $1); setRight($1);}
	| NULLL {$$ = mknode("NULL", NULL, NULL);};


address_expression: ADDRESS address_expression {$$ = mknode($1, $2, NULL);} | address {$$ = $1;};

address: ADDRESS IDENTIFIER {$$ = mknode("&", mknode($2, NULL, NULL), NULL);addOperator("&");addRightVar("IDENTIFIER", $2);}
	| ADDRESS OLIST IDENTIFIER CLIST {$$ = mknode("&", mknode("(", mknode($3, NULL, NULL), NULL), mknode(")", NULL, NULL));}
	| ADDRESS IDENTIFIER OINDEX str_expression CINDEX {$$ = mknode("&", mknode($2, NULL, NULL), mknode("[", $4, mknode("]", NULL, NULL)));}
	| ADDRESS OLIST IDENTIFIER OINDEX str_expression CINDEX CLIST {$$ = mknode("&", mknode("(", mknode($3, NULL, NULL), mknode("[", $5, NULL)), mknode("]", NULL, mknode(")", NULL, NULL)));}
	| expr ADDRESS expr {addOperator("^");};

deference_types: | INTP {$$ = mknode($1, NULL, NULL);addRightVar("INT*", NULL);}
	| REALP {$$ = mknode($1, NULL, NULL);addRightVar("REAL*", NULL);}
	| CHARP {$$ = mknode($1, NULL, NULL);addRightVar("CHAR*", NULL);}
	| IDENTIFIER {addRightVar("IDENTIFIER", $1);};

deference_statement: DEFERENCE IDENTIFIER {$$ = mknode("^", mknode($2, NULL, NULL), NULL);addOperator("^"); addRightVar("IDENTIFIER", $2);}
	| DEFERENCE OLIST expr CLIST {$$ = mknode("^", mknode("(", $3, NULL), mknode(")", NULL, NULL));addOperator("^");}
	| DEFERENCE IDENTIFIER OINDEX expr CINDEX {$$ = mknode($1, mknode($2, NULL, NULL), mknode("[", $4, mknode("]", NULL, NULL)));}
	| deference_types DEFERENCE deference_types {addOperator("^");};

function_call: IDENTIFIER call_expression {$$ = mknode("FUNC_CALL", mknode($1, NULL, NULL), mknode("ARGS", $2, NULL));
checkFuncProcCall($1);};

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
	// printf("mknode1\n");
	node* newnode = (node*)malloc(sizeof(node));
	char* newtoken = (char*)malloc(sizeof(token) + 1);
	strcpy(newtoken, token);
	newnode->left = left;
	newnode->right = right;
	newnode->token = newtoken;
	// printf("mknode2\n");
	return newnode;
}

/* printing the tree */
void printtree(node* tree)
{
	printf("TREE TOKEN: %s\n", tree->token);
	if(tree->left){
		printtree(tree->left);
	}
	if(tree->right){
		printtree(tree->right);
	}


	// int flag = 4;
	// printTabs(level);
	// if(strcmp(tree->token, "VAR") == 0){
	// 	printf("(DECLARE ");
	// 	flag = 2;
	// } else if(strcmp(tree->token, "IF") == 0){
	// 	printf("(IF\n");
	// 	flag = 1;
	// } else if(strcmp(tree->token, "WHILE") == 0){
	// 	printf("(WHILE\n");
	// 	flag = 1;
	// } else if(strcmp(tree->token, "FUNC") == 0 || strcmp(tree->token, "PROC") == 0 ||
	// 	strcmp(tree->token, "PROC") == 0 || strcmp(tree->token, "CODE") == 0 ||
	// 	strcmp(tree->token, "FUNC_CALL") == 0){
	// 	printf("%s\n", tree->token);
	// 	flag = 2;
	// } else if(strcmp(tree->token, "ARGS") == 0){
	// 	printf("(ARGS ");
	// 	if(tree->left){
	// 		flag = 2;
	// 		printf("\n");
	// 	} else {
	// 		printf("NONE)\n");
	// 	}
	// } else if(strcmp(tree->token, "IF-ELSE") == 0){
	// 	printf("(IF-ELSE\n");
	// 	level--;
	// 	flag = 1;
	// } else if(strcmp(tree->token, "RET") == 0){
	// 	printf("(RET ");
	// 	flag = 2;
	// } else if(strcmp(tree->token, "{") == 0){
	// 	printf("(BLOCK\n");
	// } else if(strcmp(tree->token, "}") == 0){
	// 	printf(")\n");
	// // else if(strcmp(tree->token, "") == 0){

	// // }	
	// } else if(strcmp(tree->token, "(") == 0){
	// 	printf("(");
	// } else if(strcmp(tree->token, "\n") == 0){
	// 	printf("\n");
	// } else if(strcmp(tree->token, ")") == 0){
	// 	printf(")\n");
	// } else if(strcmp(tree->token, ",") == 0){
	// 	printf(",");
	// } else if(strcmp(tree->token, "!=") == 0 || strcmp(tree->token, "=") == 0 ||
	// 	strcmp(tree->token, "==") == 0 || strcmp(tree->token, ">") == 0 ||
	// 	strcmp(tree->token, "<") == 0 || strcmp(tree->token, ">=") == 0 ||
	// 	strcmp(tree->token, "<=") == 0 || strcmp(tree->token, "!") == 0 ||
	// 	strcmp(tree->token, "&&") == 0 || strcmp(tree->token, "||") == 0 ||
	// 	strcmp(tree->token, "+") == 0 || strcmp(tree->token, "-") == 0 ||
	// 	strcmp(tree->token, "*") == 0 || strcmp(tree->token, "/") == 0 ||
	// 	strcmp(tree->token, "&") == 0 || strcmp(tree->token, "^") == 0 ||
	// 	strcmp(tree->token, "|") == 0){
	// 	printf("(%s", tree->token);
	// 	if(strcmp(tree->token, "=") == 0){
	// 		flag = 0;
	// 	} else {
	// 		flag = 1;
	// 	}
	// } else {
	// 	if(tree && (!tree->left && !tree->right) || strcmp(tree->token, "MAIN") == 0){
	// 		printf("%s ", tree->token);
	// 	} else {
	// 		level++;
	// 		printf("%s", tree->token);
	// 		level--;
	// 	}
	// }
	// if(tree->left){
	// 	level++;
	// 	printtree(tree->left);
	// 	level--;
	// }
	// if(tree->right){
	// 	level++;
	// 	printtree(tree->right);
	// 	level--;
	// }
	// if(flag == 2){
	// 	printf(")\n");
	// }
	// if(flag == 1){
	// 	printf(")");
	// }
	// if(flag == 0){
	// 	printf("\n)");
	// }
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