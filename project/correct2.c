#include "ptuclib.h"


/* program  Correct */ 

typedef char* string;

int x1,y,n,dummy_choice;
 double array1[5];
 int b1;

void nl (){

writeString("\n");
}
void print (int a, int c, int b, int d){

if(b!=0||d==1){
	
writeString("Here is an integer : ");
if(b==1){
	
writeInteger(a);
nl();
}
else{

if(d==1){
	
writeInteger(c);
nl();
}

}
}
else{

writeString("Ooops, no integer here\n");
}
}
int positive_power(int n, int x){
 int result; 
int i,y,z;

y=1;
if(n>=0){
	for(i=0; i<n; i++){
	
y=y*x;

}}
else{
y=1;}
result=y;
something(y);
return result;
 }
void something (int y){

if(y % 2==0){
	
writeString("Number ");
writeInteger(y);
writeString(" is even\n");
}
else{

writeString("Number ");
writeInteger(y);
writeString(" is even\n");
}
}
int dummy_check(){
 int result; 
int choice;
 string input_string;
 int flag;

flag=0;
do{
if(flag==3){
	
writeString("wrong choice! try again\n");
}

input_string="Do you want to continue running this program? (1 for yes / 0 for no)";
writeString(input_string);
result=readInteger();
flag=3;
if(result==0){
	flag=1;}
else{
if(result==1){
	flag=1;}
}
}
while(flag!=1);
return result;
 }

int main(){
dummy_choice=dummy_check();
if(dummy_choice==0){
	goto label2;}
else{
goto label1;}
label1: writeString("Type an integer : ");;
x1=readInteger();
writeString("Type another integer : ");
y=readInteger();
print(y,x1,1,0);
writeInteger(x1);
writeString("^");
writeInteger(y);
writeString("=");
writeInteger(positive_power(y,x1));
nl();
label2: writeString("End of program, Goodbye");;
} 
