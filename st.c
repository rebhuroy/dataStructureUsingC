#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int ar[MAX];
int tos=-1;
void push(int );
int pop();

int main(){
	push(12);
	push(14);
	push(2);
	push(18);
	push(177);
//	push(14);
	printf("%d",pop());
	printf("\n");
		printf("%d",pop());
		printf("\n");
			printf("%d",pop());
			printf("\n");
				printf("%d",pop());
				printf("\n");
					printf("%d",pop());
					printf("\n");
						printf("%d",pop());
return 0;	
}

void push(int x){
	if(tos==MAX-1){
		printf("overflow");
		exit(2);
	}
ar[++tos]=x;
}
int pop(){
//	int v;
	if(tos==-1){
			printf("underflow");
		exit(72);
	}
return ar[tos--];	
}
