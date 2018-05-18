#include "ptuclib.h"


/* program  foo */

typedef char* string;

string x;

int foo() {
	int result;

	result = 1;
	return result;
}

int main() {
	x = "Hello world\n";
	writeString(x);
}
