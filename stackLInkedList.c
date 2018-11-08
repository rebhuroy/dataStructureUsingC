#include<stdio.h>
struct node{
	int d;
	struct node *next;
};
struct node *tos=NULL;

void push(int data){
	struct node *temp=NULL;
	temp=(struct node *)malloc(sizeof(struct node));
	if(temp==NULL){
		printf("nOt Satisfied");
	}
	temp->d=data;
	temp->next=NULL;
if(tos==NULL){
	tos=temp;
}	
else{
	temp->next=tos;
	tos=temp;
}

	
}
void dis(){
	struct node *temp=NULL;
	temp=tos;
	while(temp!=NULL){
		printf("%d\t",temp->d);
		temp=temp->next;
	}
}

int pop(){
		struct node *temp=NULL;
		int v;
 if(tos==NULL){
 	printf("no datas");
 	
 }
 temp=tos;
 v=temp->d;
 tos=tos->next;
 temp->next=NULL;
 
 return v;
}

int main(){
	
	push(10);
		push(20);
			push(30);
				push(40);
				 	push(50);
				
	dis();
	
	printf("\n\n%d",pop());
		printf("\n\n%d",pop());
			printf("\n\n%d",pop());
				printf("\n\n%d",pop());
					printf("\n\n%d",pop());
					//	printf("\n\n%d",pop());
					dis();
	return 0;
}
