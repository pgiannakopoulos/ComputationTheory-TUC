%{
  #include <stdio.h>
  #include <string.h>  

  #include "cgen.h"
  #include  "myparser-tc.tab.h"
  
  int line_num = 1;
  int lexical_analyzer ();


  const char * print_line();
  char str[100];
  char line[256];
%}


ID      [a-zA-Z][0-9a-zA-Z_]*
DIGIT   [0-9]
NUMBER  {DIGIT}{DIGIT}*
DECIMAL ("."{NUMBER})|({NUMBER}("."{NUMBER}?)?)
REAL    {DECIMAL}([eE][+-]?{NUMBER})?
STRING  \"[^\\'\n\"]*\"

%x comment 

%%

--keywords
int      return KW_INT; 
false    return KW_FALSE;
loop     return KW_LOOP; 
return   return KW_RETURN; 
real     return KW_REAL; 
if       return KW_IF; 
pool     return KW_POOL; 
not      return KW_NOT; 
bool     return KW_BOOL; 
else     return KW_ELSE; 
const    return KW_CONST; 
and      return KW_AND; 
string   return KW_STRING; 
fi       return KW_FI; 
let      return KW_LET; 
or       return KW_OR; 
true     return KW_TRUE; 
while    return KW_WHILE; 
then     return KW_THEN; 
start    return KW_START; 

--identifiers
{ID}        { yylval.crepr = strdup(yytext); return IDENT; }

--integers
{NUMBER}    { yylval.crepr = strdup(yytext); return POSINT; }

--real_numbers
{REAL}      { yylval.crepr = strdup(yytext); return REAL; }

--strings
{STRING}  {yylval.crepr = strdup(yytext); return STRING; }

--opereators
"+"		      return '+'; 
"-"			  return '-'; 
"*"			  return '*'; 
"/"			  return '/'; 
"%"			  return '%'; 
"="			  return TK_OP_EQ; 
"<"			  return TK_OP_BIGGER; 
"<="		  return TK_OP_BIGEQ; 
"!="		  return TK_OP_NOTEQ;
"<-"          return ASSIGN;
"=>"          return ARROW; 

--delimiters
";"			  return ';'; 
"("			  return '('; 
")"           return ')'; 
","			  return ','; 
"["			  return '['; 
"]"			  return ']'; 
":"			  return ':'; 
"{"           return '{';
"}"           return '}';


--spaces
[ \r\t]+		/* eat whitespace */
\n          ++line_num;

--comments
"--"[^\n]*  		    /* eat line comments */

"\(*"                    { BEGIN(comment); printf("comment started at line: %d\n", line_num); }

<comment>[^*\n]*        /* eat anything that's not a '*' */
<comment>"*"+[^*\)\n]*   /* eat up '*'s not followed by '/'s */
<comment>\n             ++line_num;
<comment>"*"+"\)"        { BEGIN(INITIAL); printf("comment ended at line: %d\n", line_num); }

<<EOF>> 		return EOF;

.           { yyerror("lexical error: unrecognized literal %s in line %d \n", yytext, line_num); }

%%

const char * token_recognizer(int token){
	switch(token){
		case KW_INT:
			strcpy(str,"KEYWORD_INT");
			break;
		case KW_REAL:
			strcpy(str,"KEYWORD_REAL");
			break;
		case KW_BOOL:
			strcpy(str,"KEYWORD_BOOL");
			break;
		case KW_STRING:
			strcpy(str,"KEYWORD_STRING");
			break;
		case KW_TRUE:
			strcpy(str,"KEYWORD_TRUE");
			break;
		case KW_FALSE:
			strcpy(str,"KEYWORD_FALSE");
			break;
		case KW_IF:
			strcpy(str,"KEYWORD_IF");
			break;
		case KW_ELSE:
			strcpy(str,"KEYWORD_ELSE");
			break;
		case KW_FI:
			strcpy(str,"KEYWORD_FI");
			break;
		case KW_WHILE:
			strcpy(str,"KEYWORD_WHILE");
			break;
		case KW_LOOP:
			strcpy(str,"KEYWORD_LOOP");
			break;
		case KW_POOL:
			strcpy(str,"KEYWORD_POOL");
			break;
		case KW_CONST:
			strcpy(str,"KEYWORD_CONST");
			break;
		case KW_LET:
			strcpy(str,"KEYWORD_LET");
			break;
		case KW_THEN:
			strcpy(str,"KEYWORD_THEN");
			break;
		case KW_RETURN:
			strcpy(str,"KEYWORD_RETURN");
			break;
		case KW_NOT:
			strcpy(str,"KEYWORD_NOT");
			break;
		case KW_AND:
			strcpy(str,"KEYWORD_AND");
			break;
		case KW_OR:
			strcpy(str,"KEYWORD_OR");
			break;
		case KW_START:
			strcpy(str,"KEYWORD_START");
			break;
		case IDENT:
			strcpy(str,"IDENTIFIER");
			break;
		case POSINT:
			strcpy(str,"CONST_POSINT");
			break;
		case REAL:
			strcpy(str,"CONST_REAL");
			break;
		case ASSIGN:
			strcpy(str,"ASSIGN_OP");
			break;
		case '+':
			strcpy(str,"PLUS_OP");
			break;
		case '-':
			strcpy(str,"MINUS_OP");
			break;
		case '*':
			strcpy(str,"MULTIPLIFICATION_OP");
			break;
		case '/':
			strcpy(str,"DIVISION_OP");
			break;
		case '%':
			strcpy(str,"MODULO_OP");
			break;
		case TK_OP_EQ:
			strcpy(str,"EQUAL_OP");
			break;
		case TK_OP_BIGGER:
			strcpy(str,"BIGGER_OP");
			break; 
		case TK_OP_BIGEQ:
			strcpy(str,"BIGGER_EQUAL_OP");
			break;
		case TK_OP_NOTEQ:
			strcpy(str,"NOT_EQUAL_OP");
			break;
		case ';':
			strcpy(str,"SEMICOLON");
			break;	
		case '(':
			strcpy(str,"LEFT_PARENTHESIS");
			break;
		case ')':
			strcpy(str,"RIGHT_PARENTHESIS");
			break;
		case ',':
			strcpy(str,"SUBDIVISION");
			break;
		case '[':
			strcpy(str,"LEFT_BRACKET");
			break;
		case ']':
			strcpy(str,"RIGHT_BRACKET");
			break;
		case ':':
			strcpy(str,"COLON");
			break;
		case STRING:
			strcpy(str,"CONST_STRING");
			break;
		case '{':
			strcpy(str,"LEFT_CURLY_BRACKET");
			break;
		case '}':
			strcpy(str,"RIGHT_CURLY_BRACKET");
			break;
		case ARROW:
			strcpy(str,"ARROW_OP");
			break;
	}
	return str;
}

int lexical_analyzer ()
{
	int token;
	while ( (token = yylex()) != EOF )
		printf("Token %s: %s\n", token_recognizer(token), yytext);
}

const char * print_line(){
	int count = 1;

	while (fgets(line, sizeof(line), yyin) != NULL){
        if (count == line_num-1){   
        	break;
        }     
        count++;   
   } 
   return line;  
}