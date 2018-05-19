#ifndef CGEN_H
#define CGEN_H

#define MAXDEF 32
#define MAXMACRO 32

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#define SE ANSI_COLOR_RED "Syntax Error: " ANSI_COLOR_RESET
#define LE ANSI_COLOR_RED "Lexical Error: " ANSI_COLOR_RESET


/*
	String streams are handy for using standard C-library
	functions to produce formatted strings.
*/
typedef struct sstream
{
	char *buffer;
	size_t bufsize;
	FILE* stream;
} sstream;

void ssopen(sstream* S);
char* ssvalue(sstream* S);
void ssclose(sstream* S);


/*
 	This function takes the same arguments as printf,
 	but returns a new string with the output value in it.
 */
char* template(const char* pat, ...);

/*
	This is the function used to report errors in the translation.
*/
void yyerror(char const* pat, ...);

/*
	This is set to the number of calls to yyerror
 */
extern int yyerror_count;


/* This is output at the head of a c program. */
extern const char* c_prologue;

/*
 Make a C string literal out of a PTUC string literal.
 Return the corrected string (maybe the same as P).
*/
char* string_ptuc2c(char* P);

//Spread funcrion declarations and variables for C compatibility
char* func_spread(char* strt,char* type,char* vars, char* del) ;

//Spread variables for C compatibility
char* vars_spread(char* strt,char* type, char* del) ;

/* Return 1 on success, 0 on failure (def table full) */
int set_def(char* def);

/* Return 1 for def, or 0 if no such def is defined. */
int get_def(char* def);

/* Return 1 on success, 0 on failure (macro table full) */
int set_macro(char* name, char* def);

/* Return def for macro, or NULL if no such macro is defined. */
char* get_macro(char* name);

#endif
