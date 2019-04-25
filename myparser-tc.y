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
%type <crepr> global_decl decl_types
%type <crepr> body var_decl
%type <crepr> let_decl_body let_decl_list let_decl_init decl_id
%type <crepr> const_decl const_decl_body const_decl_list const_decl_init
%type <crepr> type_spec
%type <crepr> expr command
%type <crepr> func_decl func_decl_list par_decl_list par_decl return
%type <crepr> func_call param param_list local_decl
%type <crepr> if_command while_command

%precedence KW_THEN
%precedence KW_ELSE

%left KW_NOT
%left '+' '-'
%left '*' '/' '%'
%left TK_OP_EQ TK_OP_NOTEQ TK_OP_BIGGER TK_OP_BIGEQ
%left KW_AND KW_OR

%%

program: global_decl func_decl_list KW_CONST KW_START ASSIGN '(' ')' ':' KW_INT ARROW '{' local_decl body return '}' { 
/* We have a successful parse! 
  Check for any errors and generate output. 
*/
  if(yyerror_count==0) {
    // include the teaclib.h file
    puts(c_prologue); 
    printf("/* program */ \n\n");
    printf("%s\n\n", $1);
    printf("%s\n\n", $2);
    printf("int main() {\n%s\n%s\n%s\n} \n\n", $12,$13,$14);
  }
}
| global_decl func_decl_list KW_CONST KW_START ASSIGN '(' ')' ':' KW_INT ARROW '{' body return '}' { 
/* We have a successful parse! 
  Check for any errors and generate output. 
*/
  if(yyerror_count==0) {
    // include the teaclib.h file
    puts(c_prologue); 
    printf("/* program */ \n\n");
    printf("%s\n\n", $1);
    printf("%s\n\n", $2);
    printf("int main() {\n%s\n%s\n} \n\n",$12,$13);
  }
}
;

//DECLARATIONS
decl_types : var_decl { $$ = $1; }
| const_decl { $$ = $1;} 

//VARIABLES
// Declare variables to different lines
global_decl: global_decl decl_types { $$ = template("%s\n%s", $1, $2); }
| decl_types 
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
| decl_id
| func_call
| '-' expr  { $$ = template("-%s", $2); }
| '+' expr  { $$ = template("+%s", $2); }
| KW_NOT expr { $$ = template("not %s", $2); }
| expr KW_OR expr { $$ = template("%s or %s", $1, $3); }
| expr KW_AND expr { $$ = template("%s and %s", $1, $3); }
| '(' expr ')' { $$ = template("(%s)", $2); }
| expr '+' expr { $$ = template("%s + %s", $1, $3); }
| expr '-' expr { $$ = template("%s - %s", $1, $3); }
| expr '*' expr { $$ = template("%s * %s", $1, $3); }
| expr '/' expr { $$ = template("%s / %s", $1, $3); }
| expr TK_OP_BIGGER expr { $$ = template("%s < %s", $1, $3); }
| expr TK_OP_BIGEQ expr { $$ = template("%s <= %s", $1, $3); }
| expr TK_OP_NOTEQ expr { $$ = template("%s != %s", $1, $3); }
| expr TK_OP_EQ expr { $$ = template("%s == %s", $1, $3); }
| KW_TRUE { $$ = template("1"); }
| KW_FALSE { $$ = template("0"); }
;

//FUNCTIONS
func_decl_list: func_decl_list func_decl { $$ = template("%s\n%s", $1, $2); }
| func_decl { $$ = template("%s", $1); }
;

func_decl: KW_CONST decl_id ASSIGN '(' par_decl_list ')' ':' type_spec ARROW '{' local_decl body return '}' 
{ $$ = template("%s %s (%s) {\n%s\n%s\n%s\n}", $8, $2, $5, $11, $12, $13); }
| KW_CONST decl_id ASSIGN '(' par_decl_list ')' ':' type_spec ARROW '{' local_decl return '}' 
{ $$ = template("%s %s (%s) {\n%s\n%s\n}", $8, $2, $5, $11, $12); }
| KW_CONST decl_id ASSIGN '(' par_decl_list ')' ':' type_spec ARROW '{' return '}' 
{ $$ = template("%s %s (%s) {\n%s\n}", $8, $2, $5, $11); }
| KW_CONST decl_id ASSIGN '(' par_decl_list ')' ':' type_spec ARROW '{' body return '}' 
{ $$ = template("%s %s (%s) {\n%s\n%s\n}", $8, $2, $5, $11, $12); }
;

par_decl_list: par_decl_list ',' par_decl { $$ = template("%s, %s", $1, $3 );}
| par_decl { $$ = template("%s",$1);}
;

par_decl: decl_id ':' type_spec {  $$ = template("%s %s", $3, $1);  }
| %empty { $$=" ";}
;

//BODY
body: body command { $$ = template("%s\n%s", $1, $2); }
| command { $$ = template("%s", $1); }
;

command: decl_id ASSIGN expr ';' { $$ = template("%s = %s;", $1, $3); }
| func_call ';' { $$ = template("%s;", $1); }
| if_command  { $$ = template("%s", $1); }
| while_command { $$ = template("%s", $1); }
; 

//LOCAL_VARIABLES_hasConflict
local_decl: local_decl var_decl { $$ = template("%s\n%s", $1, $2); }
| var_decl { $$ = template("%s", $1); }
;

//CALL_FUNCTION
func_call: IDENT '(' param_list ')' { $$ = template("%s(%s)", $1, $3); }

param_list: param_list ',' param { $$ = template("%s, %s",$1, $3);}
| param { $$ = template("%s",$1);}

param : expr { $$ = template("%s", $1); }
| %empty { $$="";} 
;

//RETURN
return: KW_RETURN expr ';' { $$ = template("return %s;", $2); }
| KW_RETURN ';' { $$ = template("return;"); }
| %empty { $$="";} 

//IF
if_command: KW_IF expr KW_THEN command KW_FI { $$ = template("if %s {\n%s \n};", $2, $4); }
| KW_IF expr KW_THEN command KW_ELSE command KW_FI { $$ = template("if %s {\n%s \n} \nelse{ \n%s \n};", $2, $4, $4); }
;

//WHILE
while_command: KW_WHILE expr KW_LOOP command KW_POOL { $$ = template("while %s {\n%s \n};", $2, $4); }
;

%%
int main () {

  if ( yyparse() == 0 )
    printf("Accepted!\n");
  else
    printf("Rejected!\n");

//lexical_analyzer ();

}