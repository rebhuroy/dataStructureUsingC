#include<stdio.h>
#include<stdlib.h>
struct node {
	int d;
	struct node *next;
};
struct node *head=NULL;
struct node *create(int x){
		struct node *t;
     t=(struct node *)malloc(sizeof(struct node));	
     if(t==NULL){
     	printf("not pos");
     	exit(2);
	 }
     t->d=x;
     t->next=NULL;
     return t;
}

void append(int x){
	struct node *t=create(x);
     if(head==NULL){
     	head=t;
     	
     	head->next=head;
     	
	 }
	 else{
	 		struct node *ptr;
	 		ptr=head;
	 	 
	 		while(ptr->next!=head){
	 			ptr=ptr->next;
			 }
			 ptr->next=t;
			 t->next=head;
	 }
     
}
void dis(){
	struct node *ptr;
	 		ptr=head;
	 		while(ptr->next!=head){
	 			printf("%d\t",ptr->d);
	 			ptr=ptr->next;
			 }
			 	printf("%d\t",ptr->d);
}

 
 

int main()
{
	append(100);
	append(200);
	append(300);
	append(400);
	append(500);
		append(100);
	append(200);
	append(300);
	append(400);
	append(500);
	dis();
	
 
	return 0;
	
}
