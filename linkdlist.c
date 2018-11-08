#include<stdio.h>
struct node{
	int d;
	struct node *next;
};
struct node *head=NULL;

struct node * create(int x){
	 struct node *t=NULL;
 t=(struct node *)malloc(sizeof(struct node ));
 if(t==NULL){
 	printf("not");
 	
 }
   t->d=x;
   t->next=NULL;
   
   return t;
	
}
void createAtBeg(int x){
	struct node *t=create(x);
	 if(head==NULL){
   	head=t;
   	
   }
   
   else{
   	// struct node *ptr=head;
   	 
   	 t->next=head;
   	 head=t;
   	
   }
}

void append(int x){
 
   struct node *t=create(x);
   
   if(head==NULL){
   	head=t;
   	
   }
   else{
   	  struct node *ptr=head;
   	while(ptr->next!=NULL){
   		ptr=ptr->next;
	   }
	   ptr->next=t;
   }
	
}
void dis(){

	 while(ptr!=NULL){
	 	printf("%d\t",ptr->d);
	 	ptr=ptr->next;
	 }
}

int main(){
	append(10);
	append(20);
	
	append(30);
	
	append(40);
	
	append(50);
	createAtBeg(80);
	
	dis();
	
	return 0;
}
