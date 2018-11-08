#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int tos=-1;
int ar[MAX];
void push(int x);
int pop();

void push(int x){
	if(tos==MAX-1)
	{
		printf("\noverflow");
		exit(1);
	}
	ar[++tos]=x;
	printf("\nsuccessfully inserted %d",ar[tos]);
	
	
}

 int pop(){
 	if(tos==-1){
 		printf("underflow");
 		exit(2);
	 }
	 return ar[tos--];
 }
int main(){
	push(5);
	push(6);
		push(7);
	push(8);
		push(59);
printf("\n%d",pop());
printf("\n%d",pop());
printf("\n%d",pop());
printf("\n%d",pop());
printf("\n%d",pop());
}
	

