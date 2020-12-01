/*Lex Scanner file*/
%{
#include<stdio.h>
%}

/* Keywords Lexemes*/
%%
bool     		 	{return BOOLT;}
char     			{return CHART;}
int      			{return INTT;}
real     			{return REALT;}    
string   			{return STRINGT;}
int\*     			{return INTP;}
char\*    			{return CHARP;}
real\*    			{return REALP;}
if       			{return IF;}
else     			{return ELSE;}
while    		    {return WHILE;}
var      			{return VAR;}
func     		    {return FUNC;}
proc     			{return PROC;}
return   			{return RETURN;}
null     			{return NULLL;}
Main			    {return MAIN;}

"&&"     			{return AND;}
"/"     			{return DIVIDE;}
"="      			{return ASIGN;}
"=="     			{return COMPARE;}
">"      			{return GREATER;}
">="     			{return GREATEREQUAL;}
"<"      			{return LESS;}
"<="	 			{return LESSEQUAL;}
"-"      			{return MINUS;}
"!"      			{return NOT;}
"!="     			{return NOTEQUAL;}
"||"     			{return OR;}
"+"      			{return PLUS;}
"*"      			{return MULTIPLY;}
"&"      			{return ADDRESS;}
"^"      			{return DEFERENCE;}

"["	{return OINDEX;}
"]" {return CINDEX;}
"{"					{return OBLOCK;}
"}"					{return CBLOCK;}
"("					{return OLIST;}
")"				    {return CLIST;}
"|"					{return ABSOLUTE;} 
","	{return COMMA;}
":" {return COLONS;}
";" {return ENDLINE;}

true	{return BOOLEANTRUE;}	
false {return BOOLEANFALSE;}													
\'.\'   {return CHAR;}
	/*HEX and DCIMAL should be toghter?*/
[\-]?[1-9][0-9]* | (0x|0X)[0-9|A-F] {yylval = yytext; return INTEGER;}
[\-]?[0-9]*[\.]?[0-9]*	{return REAL;}
[A-Za-z][a-zA-Z0-9_]* {yylval = strdup(yytext); return IDENTIFIER;}
"\"[^"]*"\""		{return STRING;}

	/*CHECK THE COMMENT REGULAL EXP*/

[\n] {yylineno++;}
[ \t]+ ;
.	return yytext[0];
%%