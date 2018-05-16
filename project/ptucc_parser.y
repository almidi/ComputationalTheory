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
%token <crepr> BOOL

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
%token KW_RETURN
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
%token KW_TYPE


%left SY_DASH					/* -  */
%left SY_PLUS					/* +  */
%left SY_STAR					/* *  */
%left SY_SLASH					/* /  */
%left SY_EQUALS					/* =  */
%left SY_LESS					/* <  */
%left SY_GREATER				/* >  */
%left SY_LESS_EQUALS			/* <= */
%left SY_GREATER_EQUALS			/* <> */
%left SY_LESS_BIGGER			/* >= */
%left SY_AND					/* && */
%left SY_OR						/* || */
%left SY_ASSIGN					/* := */
%left SY_NOT					/* !  */
%left SY_COMMA					/* ,  */
%left SY_LEFT_SQR_BRACKET		/* [  */
%left SY_RIGHT_SQR_BRACKET		/* ]  */
%left SY_COLON					/* :  */
%left SY_SEMICOLON				/* ;  */
%left SY_PERIOD					/* .  */
%left SY_LEFT_BRACKET			/* (  */
%left SY_RIGHT_BRACKET			/* )  */


%start program

%type <crepr> program_decl  var_decl  body statements statement_list
%type <crepr> statement proc_call arguments  
%type <crepr>  arglist expression binary_exp unary_exp

/*
<<<<<<< Updated upstream
%type <crepr> advanced_data_type  matrix_n var_decl_id var_decl_list /*shortcut_data_type*/

%type <crepr> matrix_n  var_decl1 var_decl2 var_decl3 
%type <crepr> simple_data_type advanced_data_type type_def type_list shortcut_data_type   type_def_decl 

%type <crepr> return_type function_header function_body
%type <crepr> args_decl args_decl_list  procedure_body subprogram procedure_header 
%type <crepr> complex_cmd command  simple_cmd while_cmd for_cmd if_cmd else_state  

%%

/**********************************PROGRAM***********************************************/

program:  program_decl type_def var_decl subprogram body  SY_PERIOD    		

{ 
	/* We have a successful parse! 
		Check for any errors and generate output. 
	*/
	if(yyerror_count==0) {
		puts(c_prologue);
		printf("/* program  %s */ \n\n", $1);
		printf("%s\n",$2);
		printf("%s\n",$3);
		printf("int main() %s \n", $4);
	}
	else{
		printf("error");
	}
};


program_decl : KW_PROGRAM IDENT SY_SEMICOLON  	{ $$ = $2; }; /*Return Identifier*/

body : KW_BEGIN statements KW_END   	{ $$ = template("{\n %s \n }\n", $2); };/*Return Statements in brackets*/


statements: %empty				        	{ $$ = ""; }
		  | statement_list		   			{ $$ = $1; };

statement_list: statement                     
			  | statement_list SY_SEMICOLON statement  { $$ = template("%s%s", $1, $3); }; /*TODO Make sure this is correct ??*/


statement: proc_call  						{ $$ = template("%s;\n", $1); };


/*Processes and functions*/
proc_call: IDENT SY_LEFT_BRACKET arguments SY_RIGHT_BRACKET		{ $$ = template("%s(%s)", $1, $3); }; /* identifier (arguments)*/

arguments :	%empty							{ $$ = ""; }  /* init empty argumetns */
	 	  | arglist 						{ $$ = $1; }; /* list arguments */ 

arglist: expression							{ $$ = $1; }  /* an expression */
       | arglist SY_COMMA expression 		{ $$ = template("%s,%s", $1, $3);  }; /*recursive for more expressions */


/************************************** Expressions ***************************************************/

unary_exp : SY_DASH 	expression  	{ $$ = template("+%s", $2);};
		  |	SY_NOT 		expression 		{ $$ = template("-%s", $2);};
		  |	expression 	SY_NOT 			{ $$ = template("%s!", $1);};

binary_exp : expression SY_DASH				expression { $$ = template("%s-%s" , $1, $3);};
		   | expression SY_PLUS				expression { $$ = template("%s+%s" , $1, $3);};
		   | expression SY_STAR				expression { $$ = template("%s*%s" , $1, $3);};
		   | expression SY_SLASH			expression { $$ = template("%s/%s" , $1, $3);};
		   | expression SY_EQUALS			expression { $$ = template("%s=%s" , $1, $3);};
		   | expression SY_LESS				expression { $$ = template("%s<%s" , $1, $3);};
		   | expression SY_GREATER			expression { $$ = template("%s>%s" , $1, $3);};
		   | expression SY_LESS_EQUALS		expression { $$ = template("%s<=%s", $1, $3);};
		   | expression SY_GREATER_EQUALS	expression { $$ = template("%s<>%s", $1, $3);};
		   | expression SY_LESS_BIGGER		expression { $$ = template("%s>=%s", $1, $3);};
		   | expression SY_AND				expression { $$ = template("%s&&%s", $1, $3);};
		   | expression SY_OR				expression { $$ = template("%s||%s", $1, $3);};
		   | expression SY_ASSIGN			expression { $$ = template("%s:=%s", $1, $3);};


expression: POSINT
          | REAL							
          | STRING 							{ $$ = string_ptuc2c($1); };
//          |	BOOL 							
          |	IDENT
          | SY_LEFT_BRACKET expression SY_RIGHT_BRACKET {$$ = $2;}; /* needs fixing for precedence */
          | unary_exp ;
          | binary_exp ;


/************************************** Data types ***************************************************/

type_def : %empty				        	{ $$ = ""; } /* in case of "type" at least one shorcut must be found*/
		 | KW_TYPE type_def_decl {$$=$2;};

type_def_decl: type_list SY_SEMICOLON { $$ = template("%s", $1);};



type_list:  shortcut_data_type  { $$ = template("%s", $1); }; /*TODO Make sure this is correct ??*/

shortcut_data_type: %empty              {$$="";}
		 |IDENT SY_EQUALS advanced_data_type type_def_decl	{ $$ = template("typedef %s %s;\n%s ",$3,$1,$4);};
				  

advanced_data_type: simple_data_type   						 { $$ = $1; } 
				  | KW_ARRAY KW_OF simple_data_type 		 { $$ = template("%s*",$3);}
				  | KW_ARRAY matrix_n KW_OF simple_data_type { $$ = template("%s %s",$4, $2); };
				  | KW_FUNCTION SY_LEFT_BRACKET args_decl SY_RIGHT_BRACKET SY_COLON return_type { $$ = template("%s(*)(%s)",$6,$3);};

matrix_n : SY_LEFT_SQR_BRACKET POSINT SY_RIGHT_SQR_BRACKET				{ $$ = template("[%s]",$2) ;}
		 | matrix_n SY_LEFT_SQR_BRACKET POSINT SY_RIGHT_SQR_BRACKET 	{ $$ = template("%s[%s]",$1,$3) ;};


simple_data_type: KW_INTEGER 					{ $$ = "int";    }
				| KW_CHAR						{ $$ = "char"; 	 }
				| KW_BOOLEAN					{ $$ = "bool";   }
				| KW_REAL						{ $$ = "double"; };

				


/********************************************* Variables *********************************************/


var_decl: %empty { $$ = ""; } 
		| KW_VAR var_decl1  var_decl2 var_decl3 var_decl { $$ = template("%s %s%s;\n%s",$4,$2 ,$3,$5);}
		| var_decl1  var_decl2 var_decl3 var_decl { $$ = template("%s %s%s;\n%s",$3,$1 ,$2,$4);};

var_decl1: IDENT 	{ $$ = template("%s",$1);}
		 | var_decl1 SY_COMMA IDENT {$$=template("%s,%s",$1,$3);};

var_decl2: SY_COLON  {$$ = "";}
		 | SY_COLON KW_ARRAY matrix_n KW_OF  {$$ = template("%s",$3);}
		 | SY_COLON KW_ARRAY KW_OF  {$$ = template("*");};


var_decl3: simple_data_type SY_SEMICOLON  { $$ = $1; };




/********************************************* Procedures *********************************************/

subprogram: %empty { $$ = "";}
		  | procedure_header { $$ =$1;};
		  | function_header  { $$ =$1;};

//procedure_header: KW_PROCEDURE IDENT SY_LEFT_BRACKET args_decl SY_RIGHT_BRACKET SY_SEMICOLON procedure_body { $$ = template("procedure %s %s;",$2,$4);};
procedure_header: KW_PROCEDURE IDENT SY_LEFT_BRACKET args_decl SY_RIGHT_BRACKET SY_SEMICOLON procedure_body { $$ = template("void %s (%s);\n%s",$2,$4,$7);};


//function_header: KW_FUNCTION IDENT SY_LEFT_BRACKET args_decl SY_RIGHT_BRACKET return_type SY_SEMICOLON { $$ = template("function %s (%s)%s;\n",$2,$4,$6);};
function_header: KW_FUNCTION IDENT SY_LEFT_BRACKET args_decl SY_RIGHT_BRACKET return_type SY_SEMICOLON function_body { $$ = template("%s %s(%s);\n",$6,$2,$4);};


args_decl: %empty 		      { $$ = "";}
 	     | args_decl_list     { $$ = $1;};

args_decl_list: IDENT SY_COLON advanced_data_type  { $$ = template("%s %s", $3,$1);}
		      |  args_decl_list SY_COMMA IDENT SY_COLON advanced_data_type  { $$ = template("%s,%s %s",$1, $5,$3);};





return_type: %empty  {$$="";}
		   | advanced_data_type {$$=$1;};


procedure_body: var_decl subprogram command  {$$ = template("%s\n%s\n%s",$1,$2,$3);};


function_body : var_decl subprogram command  {$$ = template("%s\n%s\n%s",$1,$2,$3);};


/********************************************* Commands *********************************************/

command: complex_cmd {$$=$1;};

complex_cmd: KW_BEGIN simple_cmd KW_END { $$ = template("begin %s end;") ;};


simple_cmd: SY_SEMICOLON 					{ $$ = ";";}
		  | IDENT SY_ASSIGN expression      { $$ =template("%s=%s",$1,$3);}	//assign_cmd
		  | KW_RESULT SY_ASSIGN expression  { $$ =template("result=%s",$3);}
		  | if_cmd							{ $$ = $1;}
		  | for_cmd							{ $$ = $1;}
		  | while_cmd						{ $$ = $1;}
		  | IDENT SY_COLON complex_cmd		{ $$ = template("%s: %s;",$1,$3);}
		  | KW_GOTO IDENT   				{ $$ = template("goto %s;",$2);}
		  | KW_RETURN						{ $$ = template("return;");}
		  | IDENT SY_LEFT_BRACKET arglist 	{ $$ = template("%s(%s);\n",$1,$3);};

while_cmd: KW_WHILE expression KW_DO complex_cmd	 {$$ =template("while(%s){\n\t%s\n}\n",$2,$4);}
		 | KW_REPEAT complex_cmd KW_UNTIL expression {$$ =template("do{\n\t%s\n}\nwhile(%s)",$2,$4);};

for_cmd: KW_FOR IDENT SY_ASSIGN expression KW_TO expression KW_DO complex_cmd 	 { $$ =template("for(%s=%s; %s=%s; %s++){\n\t%s\n}",$2,$4,$2,$6,$2); }
	   | KW_FOR IDENT SY_ASSIGN expression KW_DOWNTO expression KW_DO complex_cmd{ $$ =template("for(%s=%s; %s=%s; %s--){\n\t%s\n}",$2,$4,$2,$6,$2); };

if_cmd: KW_IF expression KW_THEN complex_cmd else_state { $$ =template("if(%s){\n\t%s}\n%s",$2,$4,$5);};



else_state: %empty { $$ = "";}
		  | KW_ELSE complex_cmd{ $$ = template("else{\n\t%s}",$2);};



%%
/*
int main(){
	yyparse();
}
*/