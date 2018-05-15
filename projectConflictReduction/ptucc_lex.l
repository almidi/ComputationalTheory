%{
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "ptucc_parser.tab.h"
#include "cgen.h"

int line_num = 1;
char buf[100];
char *s ;

/* Macro buffer = 32 different macros*/
#define MAXMACRO 32
char* mactable[MAXMACRO][2];
int mactable_size = 0;

/* Return 1 on success, 0 on failure (macro table full) */
int set_macro(char* name, char* def);

/* Return def for macro, or NULL if no such macro is defined. */
char* get_macro(char* name);

%}

BOOL 		("true"|"false")
ID 			[a-zA-Z_][0-9a-zA-Z_]*
DIGIT  		[0-9]
NUMBER  	{DIGIT}{DIGIT}*
DECIMAL 	("."{NUMBER})|({NUMBER}("."{NUMBER}?)?)
REAL    	{DECIMAL}([eE][+-]?{NUMBER})?
STRING  	(\')(\\[ntr\\\'\"]|[^\'])*(\')|(\")(\\[ntr\\\'\"]|[^(\")])*(\")
RELOP		["&&"|"||"|"!"]



%x comment
%x macro
%x line_comment

%%

@defmacro[ \r\t]+       BEGIN(macro);
<macro>{ID}             {
							/* Store macro name which is in yytext*/
							char* name = strdup(yytext);
							/* Everything from now to the end of line is the macro itself*/
							char* def = NULL;
							size_t deflen = 0;
							char c;
							/*open memory as IO*/
							FILE* deff = open_memstream(&def, &deflen);
							/* TODO: Use this technique for Strings*/
							/*Stream everything until '\n' to memory*/
							while((c=input())!='\n')
							   fputc(c, deff);
							/*Close memory IO stream*/   
							fclose(deff);
							/*Try to set macro using the previously created buffer*/
							if(!set_macro(name, def))
								/*if set_macro() fails print error*/
								yyerror("lexer error: failed to define macro '%s'\n", name);
							BEGIN(INITIAL);
						};

program					return KW_PROGRAM;
begin 					return KW_BEGIN;
end						return KW_END;


and						return KW_AND;
div						return KW_DIV;
function				return KW_FUNCTION;
mod						return KW_MOD;
procedure				return KW_PROCEDURE;
result					return KW_RESULT;
array					return KW_ARRAY;
do						return KW_DO;
goto					return KW_GOTO;
not 					return KW_NOT;
return					return KW_RETURN;
boolean					return KW_BOOLEAN;
else					return KW_ELSE;
if						return KW_IF;
of						return KW_OF;
real					return KW_REAL;
then					return KW_THEN;
char					return KW_CHAR;
for						return KW_FOR;
integer					return KW_INTEGER;
or						return KW_OR;
repeat					return KW_REPEAT;
until					return KW_UNTIL;
var						return KW_VAR;
while					return KW_WHILE;
to						return KW_TO;
downto					return KW_DOWNTO;

{ID}  					{
						   /* Get the macro */
						   char* def = get_macro(yytext);
						   if(def==NULL) {
						   		yylval.crepr = strdup(yytext);
						   		/* If no macro found, Return IDENT*/
						   		/*TODO Check what IDENT is*/
						   		return IDENT;
						   }
						   /*Else put the macro back in yytext to be processed normaly */
						   for(int i=strlen(def); i>0; i--) {
						   	  unput(def[i-1]);
						   }
						}


{NUMBER}				{ yylval.crepr = strdup(yytext); return POSINT; }
{REAL}					{ yylval.crepr = strdup(yytext); return REAL; }
{STRING}				{ 
						  yylval.crepr = strdup(yytext);
						  return STRING;
						}


- 						return SY_DASH;
"/"						return SY_SLASH;
=						return SY_EQUALS;
"<"						return SY_LESS;
">"						return SY_GREATER;
"<="					return SY_LESS_EQUALS;
"<>"					return SY_GREATER_EQUALS;
">="					return SY_LESS_BIGGER;
&&						return SY_AND;
"||"					return SY_OR;
"!"						return SY_NOT;
":="					return SY_ASSIGN;

","						return SY_COMMA;
"["						return SY_LEFT_SQR_BRACKET;
"]"						return SY_RIGHT_SQR_BRACKET;
":"						return SY_COLON;


"+"						return SY_PLUS;
"*"						return SY_STAR;
";"						return SY_SEMICOLON;
"."						return SY_PERIOD;
"("						return SY_LEFT_BRACKET;
")"						return SY_RIGHT_BRACKET;


"(*"					BEGIN(comment);
<comment>[^*\n]*        /* eat anything that's not a '*' */
<comment>"*"+[^*)\n]*   /* eat up '*'s not followed by ')'s */
<comment>\n             ++line_num;
<comment>"*"+")"        BEGIN(INITIAL);


"//" 					BEGIN(line_comment);
<line_comment>[^\n]*    
<line_comment>\n        BEGIN(INITIAL);


[ \r\t]					/* skip whitespace */
\n 						++line_num;
<<EOF>>					return EOF;

.        { yyerror("lexical error: unrecognized literal '%s'\n", yytext); }


%%

int set_macro(char* name, char* def)
{
	/* Check to see if macro already defined, and redefine it. */
	int i;
	for(i=0; i<mactable_size; i++) {
		if(strcmp(mactable[i][0], name)==0) {
			/* found ! */
			free(name);
			free(mactable[i][1]);
			mactable[i][1] = def;
			break;
		}
	}

	if(i<mactable_size)
		return 1;
	else if(mactable_size < MAXMACRO) {
		/* new entry */
		assert(i==mactable_size);
		mactable[i][0] = name;
		mactable[i][1] = def;
		mactable_size++;
		return 1;
	}
	else
		return 0;
}

char* get_macro(char* name)
{
	for(int i=0;i<mactable_size; i++) {
		if(strcmp(mactable[i][0], name)==0)
			return mactable[i][1];
	}
	return NULL;
}


