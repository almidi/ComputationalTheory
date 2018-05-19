#include "ptuclib.h"


/* program  useless */ 

typedef char* string;

int i,k;

void nl (){

writeString("\n");
}
void compute (int n, int k){
int j;
int cube(int i){
 int result; 

result=i*i*i;
return result;
 }

j=(int)100-n+cube(k);
writeString("Computed (N-n)+k^3 = ");
writeInteger(j);
nl();
}
int promptForInteger(string prompt){
 int result; 

writeString(prompt);
result=readInteger();
writeString("You typed: ");
writeInteger(result);
nl();
return result;
 }

int main(){
k=promptForInteger("Type a number: ");
i=promptForInteger("Type another number: ");
compute(k,i);
} 
