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
%token <crepr> KW_BOOLEAN
%token KW_ELSE
%token KW_IF
%token KW_OF
%token <crepr> KW_REAL
%token KW_THEN
%token <crepr> KW_CHAR
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
%token SY_ASSIGN
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


%start program

%type <crepr> program_decl  var_decl  body statements statement_list
%type <crepr> statement proc_call arguments 
%type <crepr> arglist expression
%type <crepr> simple_data_type 
%type <crepr> advanced_data_type  matrix_n  var_decl1 var_decl2 var_decl3

%%

/**********************************PROGRAM***********************************************/
program:  program_decl var_decl  body  SY_PERIOD    		
{ 
	/* We have a successful parse! 
		Check for any errors and generate output. 
	*/
	if(yyerror_count==0) {
		puts(c_prologue);
		printf("/* program  %s */ \n\n", $1);
		printf("%s\n",$2);
		printf("int main() %s \n", $3);
	}
	else{
		printf("error");
	}
};


program_decl : KW_PROGRAM IDENT SY_SEMICOLON  	{ $$ = $2; };

body : KW_BEGIN statements KW_END   	{ $$ = template("{\n %s \n }\n", $2); };

statements: %empty				        	{ $$ = ""; }
		  | statement_list		   			{ $$ = $1; };

statement_list: statement                     
			  | statement_list SY_SEMICOLON statement  { $$ = template("%s%s", $1, $3); }; 


statement: proc_call  						{ $$ = template("%s;\n", $1); };

proc_call: IDENT SY_LEFT_BRACKET arguments SY_RIGHT_BRACKET		{ $$ = template("%s(%s)", $1, $3); };

arguments :	%empty							{ $$ = ""; }
	 	  | arglist 						{ $$ = $1; };

arglist: expression							{ $$ = $1; }
       | arglist SY_COMMA expression 		{ $$ = template("%s,%s", $1, $3);  };

expression: POSINT 							/* Default action: $$ = $1 */
          | REAL							
          | STRING 							{ $$ = string_ptuc2c($1); };


/************************************** Data types ***************************************************/

simple_data_type: KW_INTEGER 					{ $$ = "int";    }
				| KW_CHAR						{ $$ = "char"; 	 }
				| KW_BOOLEAN					{ $$ = "bool";   }
				| KW_REAL						{ $$ = "double"; };

/*advanced_data_type redundant for now*/
advanced_data_type: simple_data_type   						 { $$ = $1; } ;
				 /* | KW_ARRAY matrix_n KW_OF simple_data_type { $$ = template("%s %s",$4, $2); };
				  
/* todo*/ /* prepei na mpei akoma to function*/ 
/* todo*/ /* prepei na mpei akoma to syntomografies*/ 
/*shortcut_data_type: TYPE IDENT '=' advanced_data_type ';' 	{ $$ = template("%s,%s",$2,$4); }
				  | IDENT '=' advanced_data_type ';' 		{ $$ = template("%s,%s",$1,$3); }
;
*/
matrix_n : SY_LEFT_SQR_BRACKET POSINT SY_RIGHT_SQR_BRACKET				{ $$ = template("[%s]",$2) ;}
		 | matrix_n SY_LEFT_SQR_BRACKET POSINT SY_RIGHT_SQR_BRACKET 	{ $$ = template("%s[%s]",$1,$3) ;};




/************************************** Variables ***************************************************/

var_decl: %empty { $$ = ""; }
		| KW_VAR var_decl1  var_decl2 var_decl3 var_decl { $$ = template("%s %s%s;\n%s",$4,$2 ,$3,$5);}
		| var_decl1  var_decl2 var_decl3 var_decl { $$ = template("%s %s%s;\n%s",$3,$1 ,$2,$4);};

var_decl1: IDENT 	{ $$ = template("%s",$1);}
		 | var_decl1 SY_COMMA IDENT {$$=template("%s,%s",$1,$3);};

var_decl2: SY_COLON  {$$ = "";}
		 | SY_COLON KW_ARRAY matrix_n KW_OF  {$$ = template("%s",$3);}
		 | SY_COLON KW_ARRAY KW_OF  {$$ = template("*");};


var_decl3: advanced_data_type SY_SEMICOLON  { $$ = $1; };



%%
/*
int main(){
	yyparse();
}
*/