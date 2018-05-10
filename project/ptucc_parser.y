%{
#include <stdarg.h>
#include <stdio.h>
#include "cgen.h"

extern int yylex(void);
extern int line_num;
%}

%union
{
	char* crepr;
	int boolConstant;
}



%token <crepr> IDENT
%token <crepr> POSINT 
%token <crepr> REAL 
%token <crepr> STRING
%token <crepr> CAST
%token <boolConstant> BOOL

%token KW_PROGRAM 
%token KW_BEGIN 
%token KW_END
%token KW_AND
%token KW_DIV
%token KW_FUNCTION
%token KW_MOD
%token KW_PROCEDURE
%token KW_RESULT
%token KW_ARRAY
%token KW_DO
%token KW_GOTO
%token KW_NOT
%token KW_RERURN
%token KW_BOOLEAN
%token KW_ELSE
%token KW_IF
%token KW_OF
%token KW_REAL
%token KW_THEN
%token KW_CHAR
%token KW_FOR
%token KW_INTEGER
%token KW_OR
%token KW_REPEAT
%token KW_UNTIL
%token KW_VAR
%token KW_WHILE
%token KW_TO
%token KW_DOWNTO


%token SY_DASH
%token SY_SLASH
%token SY_EQUALS
%token SY_LESS
%token SY_GREATER
%token SY_LESS_EQUALS
%token SY_GREATER_EQUALS
%token SY_LESS_BIGGER
%token SY_AND
%token SY_OR
%token SY_NOT
%token SY_COLON_EQUALS
%token SY_COMMA
%token SY_LEFT_SQR_BRACKET
%token SY_RIGHT_SQR_BRACKET
%token SY_COLON
%token SY_PLUS
%token SY_STAR
%token SY_SEMICOLON
%token SY_PERIOD
%token SY_LEFT_BRACKET
%token SY_RIGHT_BRACKET


%token ASSIGN
%left EQUAL
%left NOT_EQUAL
%left L_E_T
%left G_E_T

%start program

%type <crepr> program_decl body statements statement_list
%type <crepr> statement proc_call arguments
%type <crepr> arglist expression

%%

program:  program_decl body  '.'   		
{ 
	/* We have a successful parse! 
		Check for any errors and generate output. 
	*/
	if(yyerror_count==0) {
		puts(c_prologue);
		printf("/* program  %s */ \n\n", $1);
		printf("int main() %s \n", $2);
	}
};


program_decl : KW_PROGRAM IDENT ';'  	{ $$ = $2; };

body : KW_BEGIN statements KW_END   	{ $$ = template("{\n %s \n }\n", $2); };

statements: 				        	{ $$ = ""; };
statements: statement_list		   		{ $$ = $1; };

statement_list: statement                     
			  | statement_list ';' statement  { $$ = template("%s%s", $1, $3); }; 


statement: proc_call  						{ $$ = template("%s;\n", $1); };

proc_call: IDENT '(' arguments ')' 			{ $$ = template("%s(%s)", $1, $3); };

arguments :									{ $$ = ""; }
	 	  | arglist 						{ $$ = $1; };

arglist: expression							{ $$ = $1; }
       | arglist ',' expression 			{ $$ = template("%s,%s", $1, $3);  };

expression: POSINT 							/* Default action: $$ = $1 */
          | REAL							
          | STRING 							{ $$ = string_ptuc2c($1); };

%%

