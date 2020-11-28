/*Lex Scanner file*/

%%

			/* Keywords Lexemes*/
bool     			{return BOOLT; }
char     			{return CHART; }
int      			{return INTT; }
real     			{return REALT; }    
string   			{return STRINGT; }
int*     			{return INTP; }
char*    			{return CHARP; }
real*    			{return REALP; }
if       			{return IF; }
else     			{return ELSE; }
while    		    {return WHILE; }
var      			{return VAR; }
func     		    {return FUNC; }
proc     			{return PROC; }
return   			{return RETURN; }
null     			{return NULL; }
Main			    {return MAIN; }

			/*Operator Lexemes*/
"&&"     			{return AND; }
"/"     			{return DIVIDE; }
"="      			{return ASIGN; }
"=="     			{return COMPARE; }
">"      			{return GREATER; }
">="     			{return GREATEREQUAL; }
"<"      			{return LESS; }
"<="	 			{return LESSEQUAL; }
"-"      			{return MINUS; }
"!"      			{return NOT; }
"!="     			{return NOTEQUAL; }
"||"     			{return OR; }
"+"      			{return PLUS; }
"*"      			{return MULTIPLY; }
"&"      			{return ADDRESS; }
"^"      			{return DEREFERENCE; }

			/* Other lexemes */
";"						{return ENDLIINE; }
":"						{return COLONS; }
","						{retrun COMMA; }
"|"						{return ABSOLUTE; }
"{"						{return OBLOCK; }
"}"						{return CBLOCK; }
"("						{return OLIST; }
")"				        {return CLIST; }
"["						{return OINDEX; }
"]"					    {return CINDEX; } 

			/* Literal lexemes */
(true|false) 		{return BOOLEAN;}													
\'[a-z] | [A-Z]\'   {return CHAR; }
(\-)?[1-9][0-9]* | (0x|0X)[0-9|A-F]+  {return INTEGER; }
(\-)?[0-9]*(\.)?[0-9]*				           {return REAL; }
\"(\\.|[^"\\])*\"		{return STRING; }
"/""%".*"%""/"  {retrun COMMENT; }
[A-Za-z][a-zA-Z0-9_]*  {return IDENTIFIER; }
.   					{return yytext[0]; }
%%
