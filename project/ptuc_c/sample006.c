#include "ptuclib.h"


/* program  function_fun */ 

typedef int(*intfunc)(int);

typedef char* string;


int fibonacci(int n){
 int result; 
int f0,f1,temp;

f0=0;
f1=1;
while(n>1){
temp=f1;
f1=f1+f0;
f0=temp;
n=n-1;
};
result=f1;
return result;
 return result;}
int factorial(int n){
 int result; 
int fac,i;

fac=1;
for(i=n; i>1; i--){
	fac=i*fac;
}
result=fac;
return result;
 return result;}
void eval (string prompt,intfunc f,int val){

writeString(prompt);
writeString("(");
writeInteger(val);
writeString(")=");
writeInteger(f(val));
writeString("\n");
}

int main(){
eval("Fibonacci",fibonacci,5);
eval("factorial",factorial,5);
} 
