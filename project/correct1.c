#include "ptuclib.h"


/* program  function_fun */ 

typedef int(*intfunc)(int );

typedef char* string;

int (*v1)();
 double v2[2][3][4][5];
 int v3,v4;
 int v5,i;

void nl (){

writeString("\n");
}
void p1 (){
int v5,i,v3;
 double v4;

v3=5;
v5=2;
v5=(int)v4;
for(i=0; i<4; i++){
	
v5=v5+1;
v5=v3*v5;

}
v3=v5 % i;
writeInteger(v3);
}
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
 }
int factorial(int n){
 int result; 
int fac,i;

fac=1;
for(i=n; i>1; i--){
	fac=i*fac;
}
result=fac;
return result;
 }
void eval (string prompt, intfunc f, int val){

writeString("Call p1 : ");
p1();
nl();
writeString(prompt);
writeString("(");
writeInteger(val);
writeString(")=");
writeInteger(f(val));
writeString("\n");
}

int main(){
for(i=5; i>2; i--){
	
eval("Fibonacci",fibonacci,i);
eval("factorial",factorial,i-1);

}
} 
