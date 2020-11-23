%%
bool     																			{return BOOL; }
char     																			{return CHAR; }
int      																				{return INT; }
real     																				{return REAL; }    
string   																			{return STRING; }
int*     																				{return INTP; }
char*    																			{return CHARP; }
real*    																				{return REALP; }
if       																				{return IF; }
else     																				{return ELSE; }
while    																			{return WHILE; }
var      																				{return VAR; }
func     																			{return FUNC; }
proc     																			{return PROC; }
return   																			{return RETURN; }
null     																				{return NULL; }
"&&"     																			{return AND; }
"/"     																				{return DIVIDE; }
"="      																				{return ASIGN; }
"=="     																				{return COMPARE; }
">"      																				{return GREATER; }
">="     																				{return GREATEREQUAL; }
"<"      																				{return LESS; }
"<="	 																				{return LESSEQUAL; }
"-"      																				{return MINUS; }
"!"      																				{return NOT; }
"!="     																				{return NOTEQUAL; }
"||"     																				{return OR; }
"+"      																				{return PLUS; }
"*"      																				{return MULTIPLY; }
"&"      																				{return ADDRESS; }
"^"      																				{return DEREFERENCE; }
(true|false) 																		{return BOOLEAN; }
(\'[a-z] | [A-Z]\') 																{return CHAR; }
([1-9][0-9]* | (0x|0X)[0-9|A-F]+)   										{return INTEGER; }
 (\-|\+)?([0-9]*(\.)?[0-9]*)													{return REAL; }
 (\" (([a-z]|[A-Z])* (\ )* ([a-z] | [A-Z])*)* (\\n)*\") 					{return STRING; }
.        return yytext[0]; 
%%
