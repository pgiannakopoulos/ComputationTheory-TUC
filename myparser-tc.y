%{
  #include <stdlib.h>
  #include <stdarg.h>
  #include <stdio.h>
  #include <string.h>   
  #include "cgen.h"

  extern int yylex(void);
  extern int line_num;
%}

%union
{
  char* crepr;
}

%define parse.trace
%debug

%token KW_INT 
%token KW_REAL 
%token KW_STRING 
%token KW_TRUE 
%token KW_FALSE 
%token KW_BOOL 
%token KW_IF
%token KW_THEN
%token KW_ELSE 
%token KW_FI
%token KW_WHILE 
%token KW_LOOP 
%token KW_POOL 
%token KW_CONST 
%token KW_LET 
%token KW_RETURN 
%token KW_NOT 
%token KW_AND 
%token KW_OR 
%token KW_START 

%token <crepr> STRING
%token <crepr> IDENT 
%token <crepr> POSINT 
%token <crepr> REAL 

%token ASSIGN 
%token TK_OP_EQ 
%token TK_OP_BIGGER  
%token TK_OP_BIGEQ 
%token TK_OP_NOTEQ 
%token ARROW 

%start program
%type <crepr> declarations
%type <crepr> var_decl_list body var_decl
%type <crepr> let_decl_body let_decl_list let_decl_init decl_id
%type <crepr> const_decl const_decl_body const_decl_list const_decl_init
%type <crepr> type_spec
%type <crepr> expr
%type <crepr> func_decl par_list param func_decl_list

%left '-' '+'
%left '*' '/'

%%

program: var_decl_list func_decl_list KW_CONST KW_START ASSIGN '(' ')' ':' KW_INT ARROW '{' body '}' { 
/* We have a successful parse! 
  Check for any errors and generate output. 
*/
  if(yyerror_count==0) {
    // include the teaclib.h file
    puts(c_prologue); 
    printf("/* program */ \n\n");
    printf("%s\n\n", $1);
    printf("%s\n\n", $2);
    printf("int main() {\n%s\n} \n", $12);
  }
}
|
KW_CONST KW_START ASSIGN '(' ')' ':' KW_INT ARROW '{' body '}' { 
/* We have a successful parse! 
  Check for any errors and generate output. 
*/
  if(yyerror_count==0) {
    // include the teaclib.h file
    puts(c_prologue); 
    printf("/* program */ \n\n");
    printf("int main() {\n%s\n} \n", $10);
  }

}
;

//DECLARATIONS
declarations : var_decl { $$ = $1; }
| const_decl { $$ = $1;} 

//VARIABLES
// Declare variables to different lines
var_decl_list: var_decl_list declarations { $$ = template("%s\n%s", $1, $2); }
| declarations 
;

// Declare variables to the same line
var_decl: KW_LET let_decl_body { $$ = template("%s", $2); }
;

let_decl_body: let_decl_list ':' type_spec ';' {  $$ = template("%s %s;", $3, $1); }
;

let_decl_list: let_decl_list ',' let_decl_init { $$ = template("%s, %s", $1, $3 );}
| let_decl_init { $$ = $1; }
;

let_decl_init: decl_id { $$ = $1; }
| decl_id ASSIGN expr { $$ = template("%s = %s", $1, $3); 
}
;


// CONSTANTS
const_decl: KW_CONST const_decl_body { $$ = template("const %s", $2); }
;

const_decl_body: const_decl_list ':' type_spec ';' {  $$ = template("%s %s;", $3, $1); }
;

const_decl_list: const_decl_list ',' const_decl_init { $$ = template("%s, %s", $1, $3 );}
| const_decl_init { $$ = $1; }
;

const_decl_init: decl_id ASSIGN POSINT { $$ = template("%s = %s", $1, $3); } 
|
decl_id ASSIGN REAL { $$ = template("%s = %s", $1, $3); }
|
decl_id ASSIGN STRING { $$ = template("%s = %s", $1, $3); }
; 

//USEFUL_FOR_DECLARATIONS
decl_id: IDENT { $$ = $1; } 
| '[' ']' IDENT { $$ = template("*%s", $3); }
| IDENT '[' POSINT ']' { $$ = template("%s[%s]", $1, $3); }
;

type_spec:  KW_INT { $$ = "int"; }
| KW_REAL { $$ = "double"; }
| KW_BOOL { $$ = "int"; }
| KW_STRING { $$ = "string"; }
;

expr:
  POSINT
| REAL
| STRING
| '(' expr ')' { $$ = template("(%s)", $2); }
| expr '+' expr { $$ = template("%s + %s", $1, $3); }
| expr '-' expr { $$ = template("%s - %s", $1, $3); }
| expr '*' expr { $$ = template("%s * %s", $1, $3); }
| expr '/' expr { $$ = template("%s / %s", $1, $3); }
;

//FUNCTIONS
func_decl_list: func_decl_list func_decl { $$ = template("%s\n%s", $1, $2); }
| func_decl { $$ = template("%s", $1); }

func_decl: KW_CONST decl_id ASSIGN '(' par_list ')' ':' type_spec ARROW '{' body '}' 
{ $$ = template("%s %s (%s) {\n %s \n}", $8, $2, $5, $11); }

par_list: par_list ',' param { $$ = template("%s, %s", $1, $3 );}
| param { $$ = template("%s",$1);}
;

param: decl_id ':' type_spec {  $$ = template("%s %s", $3, $1);  }
| %empty { $$=" ";}
;

body: %empty { $$="";}
;


%%
int main () {

  if ( yyparse() == 0 )
    printf("Accepted!\n");
  else
    printf("Rejected!\n");

//lexical_analyzer ();

}