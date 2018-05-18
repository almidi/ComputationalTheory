%{
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
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
%token <crepr> DEF_TYPE

%token KW_PROGRAM 
%token KW_BEGIN 
%token KW_END
%left KW_AND
%left KW_DIV
%token KW_FUNCTION
%left  KW_MOD
%token KW_PROCEDURE
%token KW_RESULT
%token KW_ARRAY
%token KW_DO
%token KW_GOTO
%token KW_NOT
%token KW_RETURN
%token KW_BOOLEAN
%token KW_OF
%token KW_REAL
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

%token KW_IF
%nonassoc KW_THEN               //PRECEDENCE FOR IF THEN ELSE
%nonassoc KW_ELSE


%right SY_DASH					/* -  */
%right SY_PLUS					/* +  */
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
%right SY_NOT					/* !  */
%left SY_COMMA					/* ,  */
%left SY_LEFT_SQR_BRACKET		/* [  */
%left SY_RIGHT_SQR_BRACKET		/* ]  */
%left SY_COLON					/* :  */
%right SY_SEMICOLON				/* ;  */
%left SY_PERIOD					/* .  */
%right SY_LEFT_BRACKET			/* (  */
%left SY_RIGHT_BRACKET			/* )  */


%start program

%type <crepr> program_decl  var_decl
%type <crepr> proc_call arguments  
%type <crepr> arglist expression binary_exp unary_exp

%type <crepr> matrix_n var_decl_list var_decl1 var_decl2 var_decl3 
%type <crepr> simple_data_type advanced_data_type type_def type_list shortcut_data_type

%type <crepr> return_type function_header function_body
%type <crepr> args_decl args_decl_list  procedure_body subprogram subprogram_list procedure_header args_decl_excl args_decl_excl_list
%type <crepr> cmd_list all_commands complex_cmd simple_cmd  for_cmd while_cmd  if_cmd   


%%

/**********************************PROGRAM***********************************************/

program   		   : program_decl type_def var_decl subprogram_list complex_cmd  SY_PERIOD								{ 
																															/* We have a successful parse! 
																																Check for any errors and generate output. 
																															*/
																															if(yyerror_count==0) {
																																puts(c_prologue);
																																printf("/* program  %s */ \n\n", $1);
																																printf("%s\n",$2);
																																printf("%s\n",$3);
																																printf("%s\n",$4);
																																printf("int main(){%s} \n", $5);
																															}
																															else{
																																printf("%d Errors Detected. Exiting\n",yyerror_count);
																															}
																														}
				   | error 																								{ yyerror("Syntax Error: Program Declaration Expected\n");}
				   | program_decl type_def var_decl subprogram_list error 												{ yyerror("Syntax Error: Complex Command Expected\n");}
				   | program_decl type_def var_decl subprogram_list complex_cmd error 									{ yyerror("Syntax Error: Period Expected\n");}
				   ;



program_decl       : KW_PROGRAM IDENT SY_SEMICOLON                                                                      { $$ = $2; } /*Return Identifier*/
				   ; 

arguments          :	%empty                                                                                          { $$ = ""; } /* init empty argumetns */
                   | arglist                                                                                            { $$ = $1; } /* list arguments */ 
                   ; 

arglist            : expression                                                                                         { $$ = $1; }  
                   | arglist SY_COMMA expression                                                                        { $$ = template("%s,%s", $1, $3);  } /*recursive for more expressions */
                   ; 


/************************************** Expressions ***************************************************/

unary_exp          : SY_DASH 						expression                                                          { $$ = template("+%s", $2);}
                   | SY_NOT 						expression                                                          { $$ = template("-%s", $2);}
                   | expression 					SY_NOT                                                              { $$ = template("%s!", $1);}
                   | SY_LEFT_BRACKET simple_data_type SY_RIGHT_BRACKET expression                                       { $$ = template("(%s)%s",$2,$4);}//Casting
                   ; 
                  

binary_exp         : expression SY_DASH				expression                                                          { $$ = template("%s-%s" , $1, $3);};
                   | expression SY_PLUS				expression                                                          { $$ = template("%s+%s" , $1, $3);};
                   | expression SY_STAR				expression                                                          { $$ = template("%s*%s" , $1, $3);};
                   | expression SY_SLASH			expression                                                          { $$ = template("%s/%s" , $1, $3);};
                   | expression SY_EQUALS			expression                                                          { $$ = template("%s==%s" , $1, $3);};
                   | expression SY_LESS				expression                                                          { $$ = template("%s<%s" , $1, $3);};
                   | expression SY_GREATER			expression                                                          { $$ = template("%s>%s" , $1, $3);};
                   | expression SY_LESS_EQUALS		expression                                                          { $$ = template("%s<=%s", $1, $3);};
                   | expression SY_GREATER_EQUALS	expression                                                          { $$ = template("%s<>%s", $1, $3);};
                   | expression SY_LESS_BIGGER		expression                                                          { $$ = template("%s>=%s", $1, $3);};
                   | expression SY_AND				expression                                                          { $$ = template("%s&&%s", $1, $3);};
                   | expression KW_AND				expression                                                          { $$ = template("%s&&%s", $1, $3);};
                   | expression SY_OR				expression                                                          { $$ = template("%s||%s", $1, $3);};
                   | expression SY_ASSIGN			expression                                                          { $$ = template("%s:=%s", $1, $3);};
                   | expression KW_DIV				expression                                                          { $$ = template("%s/%s" , $1, $3);};
                   | expression KW_MOD				expression                                                          { $$ = template("%s %% %s" , $1, $3);}
                   ;


expression         : POSINT
                   | REAL							
                   | STRING                                                                                             { $$ = string_ptuc2c($1); };
	               | BOOL 							
                   | IDENT
                   | KW_RESULT                                                                                          { $$ = "result";}
                   | SY_LEFT_BRACKET expression SY_RIGHT_BRACKET                                                        { $$ = $2;} /* needs fixing for precedence */
                   | unary_exp 
                   | binary_exp 
                   | proc_call 
                   ;



/************************************** Data types ***************************************************/

type_def           : %empty                                                                                             { $$ = ""; } /* in case of "type" at least one typedef must be found*/
                   | KW_TYPE type_list                                                                                  { $$=$2; }
                   ; 


type_list          : shortcut_data_type                                                                                  /*TODO Make sure this is correct ??*/
                   | type_list shortcut_data_type																		{ $$ = template("%s\n%s", $1,$2); } 
                   ;

shortcut_data_type : IDENT SY_EQUALS advanced_data_type SY_SEMICOLON                                                      { $$ = template("typedef %s %s;\n",$3,$1); 
																	   													    set_def(strdup($1));}//SAVE SOMEWHERE THE FEFINED DATA TYPES
				   | IDENT SY_EQUALS KW_FUNCTION SY_LEFT_BRACKET args_decl_excl SY_RIGHT_BRACKET return_type SY_SEMICOLON { $$ = template("typedef %s(*%s)(%s);\n",$7,$1,$5);
				   																											set_def(strdup($1));} //TODO Check if this is ortho
				   ;


advanced_data_type : simple_data_type                                                                                   { $$ = $1; } //TODO split to all_data_types
                   | KW_ARRAY KW_OF simple_data_type                                                                    { $$ = template("%s*",$3);}
                   | KW_ARRAY matrix_n KW_OF simple_data_type                                                           { $$ = template("%s %s",$4, $2); }
                   //| KW_FUNCTION SY_LEFT_BRACKET args_decl SY_RIGHT_BRACKET return_type                                 { $$ = template("%s(*)(%s)",$5,$3);}; 
                   ;

matrix_n           : SY_LEFT_SQR_BRACKET POSINT SY_RIGHT_SQR_BRACKET                                                    { $$ = template("[%s]",$2) ;}
                   | matrix_n SY_LEFT_SQR_BRACKET POSINT SY_RIGHT_SQR_BRACKET                                           { $$ = template("%s[%s]",$1,$3) ;}
                   ;


simple_data_type   : KW_INTEGER                                                                                         { $$ = "int";    }
                   | KW_CHAR                                                                                            { $$ = "char"; 	 }
                   | KW_BOOLEAN                                                                                         { $$ = "int";   }
                   | KW_REAL                                                                                            { $$ = "double"; }
                   | DEF_TYPE										
                   ;



/********************************************* Variables *********************************************/


var_decl           : %empty                                                                                             { $$ = ""; } 
                   | KW_VAR var_decl_list                                                                               {$$ = $2;}
                   ;

var_decl_list      : var_decl1  var_decl2 var_decl3                                                                     { $$ = template("%s %s%s;\n",$3,$1 ,$2);};
                   | var_decl_list var_decl1  var_decl2 var_decl3                                                       { $$ = template("%s%s %s%s;\n",$1, $4,$2 ,$3);};
var_decl1          : IDENT                                                                                              { $$ = template("%s",$1);}
                   | var_decl1 SY_COMMA IDENT                                                                           {$$=template("%s,%s",$1,$3);}
                   ;

var_decl2          : SY_COLON                                                                                           {$$ = "";}
                   | SY_COLON KW_ARRAY matrix_n KW_OF                                                                   {$$ = template("%s",$3);}
                   | SY_COLON KW_ARRAY KW_OF                                                                            {$$ = template("*");}
                   ;


var_decl3          : simple_data_type SY_SEMICOLON                                                                      { $$ = $1; }
				   ;




/********************************************* Procedures *********************************************/

subprogram         : procedure_header                                                                                   { $$ =$1;}
                   | function_header                                                                                    { $$ =$1;}
                   ;

subprogram_list    : %empty                                                                                             {$$="";}
                   | subprogram_list subprogram                                                                         {$$ = template("%s%s", $1,$2);}
                   ;


//procedure_header : KW_PROCEDURE IDENT SY_LEFT_BRACKET args_decl SY_RIGHT_BRACKET SY_SEMICOLON procedure_body          { $$ = template("procedure %s %s;",$2,$4);};
procedure_header   : KW_PROCEDURE IDENT SY_LEFT_BRACKET args_decl SY_RIGHT_BRACKET SY_SEMICOLON procedure_body          { $$ = template("void %s (%s){%s}\n",$2,$4,$7);}
				   ;


//function_header  : KW_FUNCTION IDENT SY_LEFT_BRACKET args_decl SY_RIGHT_BRACKET return_type SY_SEMICOLON              { $$ = template("function %s (%s)%s;\n",$2,$4,$6);};
function_header    : KW_FUNCTION IDENT SY_LEFT_BRACKET args_decl SY_RIGHT_BRACKET return_type SY_SEMICOLON function_body{ $$ = template("%s %s(%s){\n %s result; %s}\n",$6,$2,$4,$6,$8);}
				   ;

//Arguments Declaration
args_decl          : %empty                                                                                             { $$ = "";}
                   | args_decl_list                                                                                     { $$ = $1;}
                   ;

args_decl_list     : IDENT SY_COLON advanced_data_type                                                                  { $$ = template("%s %s", $3,$1);}
                   |  args_decl_list SY_SEMICOLON IDENT SY_COLON advanced_data_type                                     { $$ = template("%s,%s %s",$1, $5,$3);}
                   ;

//Arguments Declaration List Excluding Anguments names
args_decl_excl     : %empty                                                                                             { $$ = "";}
                   | args_decl_excl_list                                                                                { $$ = $1;}
                   ;

args_decl_excl_list: IDENT SY_COLON advanced_data_type                                                                  { $$ = $3;}
                   |  args_decl_excl_list SY_SEMICOLON IDENT SY_COLON advanced_data_type                                { $$ = template("%s,%s %s",$1, $5,$3);}
                   ;


return_type        : %empty                                                                                             {$$=""; yyerror("return type expected");}
                   | SY_COLON advanced_data_type                                                                        {$$=$2;}
                   ;


procedure_body     : var_decl subprogram_list complex_cmd SY_SEMICOLON                                                  {$$ = template("\n%s%s%s",$1,$2,$3);}
				   ;


function_body      : var_decl subprogram_list complex_cmd SY_SEMICOLON                                                  {$$ = template("\n%s%s%s",$1,$2,$3);}
				   ;



/********************************************* Commands *********************************************/

all_commands       : complex_cmd // Complex Comands or just a simple command
                   | simple_cmd 
                   ;

complex_cmd        : KW_BEGIN cmd_list KW_END                                                                           { $$ = template("\n%s\n",$2) ;}//Only complex commands "BEGIN foo END"
				   ; 


cmd_list           : %empty                                                                                             { $$ = "";} //list of simple commands
                   |simple_cmd 																							
                   |cmd_list SY_SEMICOLON simple_cmd                                                                    { $$ = template("%s\n%s",$1,$3) ;}
                   ;


simple_cmd         : IDENT SY_ASSIGN expression                                                                         { $$ =template("%s=%s;",$1,$3);}	//assign_cmd
                   | KW_RESULT SY_ASSIGN expression                                                                     { $$ =template("result=%s;",$3);}
                   | if_cmd                                                                                             { $$ = $1;}
                   | for_cmd                                                                                            { $$ = $1;}
                   | while_cmd                                                                                          { $$ = template("%s;",$1);}
                   | IDENT SY_COLON all_commands                                                                        { $$ = template("%s: %s;",$1,$3);} //TODO does all_commands need brackets in labels ?
                   | KW_GOTO IDENT                                                                                      { $$ = template("goto %s;",$2);}
                   | KW_RETURN                                                                                          { $$ = template("return result;");}
                   | IDENT SY_LEFT_BRACKET arglist                                                                      { $$ = template("%s(%s)\n;",$1,$3);}
                   | proc_call                                                                                          { $$ = template("%s;", $1); }
                   ;

/*Processes and functions call*/
proc_call          : IDENT SY_LEFT_BRACKET arguments SY_RIGHT_BRACKET                                                   { $$ = template("%s(%s)", $1, $3); } /* identifier (arguments)*/
				   ;

/*While Loop*/
while_cmd          : KW_WHILE expression KW_DO all_commands                                                             {$$ =template("while(%s){%s}",$2,$4);}
                   | KW_REPEAT all_commands KW_UNTIL expression                                                         {$$ =template("do{%s}\nwhile(%s)",$2,$4);}
                   ;

/*For Loop*/
for_cmd            : KW_FOR IDENT SY_ASSIGN expression KW_TO expression KW_DO all_commands                              { $$ =template("for(%s=%s; %s<%s; %s++){\n\t%s\n}",$2,$4,$2,$6,$2,$8); }
                   | KW_FOR IDENT SY_ASSIGN expression KW_DOWNTO expression KW_DO all_commands                          { $$ =template("for(%s=%s; %s>%s; %s--){\n\t%s\n}",$2,$4,$2,$6,$2,$8); }
                   ;


if_cmd			   : KW_IF expression KW_THEN all_commands                                 				    			{ $$ = template("if(%s){\n\t%s}\n",$2,$4);}            
				   | KW_IF expression KW_THEN all_commands KW_ELSE all_commands                              			{ $$ = template("if(%s){\n\t%s}\nelse{\n%s}",$2,$4,$6);}
				   ;
				   



%%
/*
int main()                                                                                                              {
	yyparse();
}
*/

