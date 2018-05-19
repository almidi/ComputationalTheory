#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "cgen.h"

extern int line_num;


extern char* deftable[];
extern int deftable_size;


extern char* mactable_name[];
extern char* mactable_def[];
extern int mactable_size;

/* Return 1 on success, 0 on failure (macro table full) */
int set_macro(char* name, char* def)
{
	/* Check to see if macro already defined, and redefine it. */
	int i;
	for(i=0; i<mactable_size; i++) {
		if(strcmp(mactable_name[i], name)==0) {
			/* found ! */
			free(name);
			free(mactable_def[i]);
			mactable_def[i] = def;
			break;
		}
	}

	if(i<mactable_size)
		return 1;
	else if(mactable_size < MAXMACRO) {
		/* new entry */
		assert(i==mactable_size);
		mactable_name[i] = name;
		mactable_def[i] = def;
		mactable_size++;
		return 1;
	}
	else
		return 0;
}

/* Return def for macro, or NULL if no such macro is defined. */
char* get_macro(char* name)
{
	for(int i=0;i<mactable_size; i++) {
		if(strcmp(mactable_name[i], name)==0)
			return mactable_def[i];
	}
	return NULL;
}


/* Return 1 on success, 0 on failure (def table full) */
int set_def(char* def)
{
	/* Check to see if def already defined, and redefine it. */
	int i;
	for(i=0; i<deftable_size; i++) {
		if(strcmp(deftable[i], def)==0) {
			/* found ! */
			free(def);
			break;
		}
	}

	if(i<deftable_size)
		return 1;
	else if(deftable_size < MAXDEF) {
		/* new entry */
		assert(i==deftable_size);
		deftable[i] = def;
		deftable_size++;
		return 1;
	}
	else
		return 0;
}

/* Return 1 for def, or 0 if no such def is defined. */
int get_def(char* def)
{
	for(int i=0;i<deftable_size; i++) {
		if(strcmp(deftable[i], def)==0)
			return 1;
	}
	return 0;
}


void ssopen(sstream* S)
{
	S->stream = open_memstream(& S->buffer, & S->bufsize);
}

char* ssvalue(sstream* S)
{
	fflush(S->stream);
	return S->buffer;
}

void ssclose(sstream* S)
{
	fclose(S->stream);
}


char* template(const char* pat, ...)
{
	sstream S;
	ssopen(&S);

	va_list arg;
	va_start(arg, pat);
	vfprintf(S.stream, pat, arg );
	va_end(arg);

	char* ret = ssvalue(&S);
	ssclose(&S);
	return ret;
}

/* Helper functions */

char* string_ptuc2c(char* P)
{
	/*
		This implementation is 
		***** NOT CORRECT ACCORDING TO THE PROJECT ******
	*/

	/* Just chech and change the first and last characters */
	int Plen = strlen(P);
	assert(Plen>=2);

	P[0] = '"';
	P[Plen-1] = '"';

	//yyerror("String ptuc2c P: %s\n",P);

	return P;
}

//Spread funcrion declarations and variables for C compatibility
char* func_spread(char* strt,char* type,char* vars, char* del) {
    sstream S;
    ssopen(&S);

    fprintf(S.stream, "%s (*",type);
    for(int i =0 ; i < strlen(strt);i++){
        if(strt[i] == ','){
            fprintf(S.stream, ")(%s)%s %s (*",vars,del,type);
        }
        else{
            fprintf(S.stream, "%c", strt[i] );
        }
    }
    fprintf(S.stream, ")(%s)",vars);
    char* ret = ssvalue(&S);
    ssclose(&S);

    return ret;
}

//Spread variables for C compatibility
char* vars_spread(char* strt,char* type, char* del) {
    sstream S;
    ssopen(&S);

    fprintf(S.stream, "%s ",type);
    for(int i =0 ; i < strlen(strt);i++){
        if(strt[i] == ','){
            fprintf(S.stream, "%s %s ",del,type);
        }
        else{
            fprintf(S.stream, "%c", strt[i] );
        }
    }
    char* ret = ssvalue(&S);
    ssclose(&S);

    return ret ;
}




/*
	Report errors 
*/

int yyerror_count = 0;


 void yyerror (char const *pat, ...) {
 	va_list arg;
    fprintf (stderr, "line %d: ", line_num);

    va_start(arg, pat);
    vfprintf(stderr, pat, arg);
    va_end(arg);

    yyerror_count++; //Add Error Count
 }


const char* c_prologue = 
"#include \"ptuclib.h\"\n"
"\n"

;






