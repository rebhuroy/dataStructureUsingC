#include<stdio.h>
struct node{
		struct node *prev;
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
 t->prev=NULL;
   t->d=x;
   t->next=NULL;
   
   return t;
	
}


void append(int x){
 
   struct node *t=create(x);
   
   if(head==NULL){
   	head=t;
   	
   }
   else{
   	struct node *p=head;
   	struct node *cu=head;
   	while(cu!=NULL){
   		p=cu;
   		if(t->d>cu->d){
   			cu=cu->next;
		   }
		   else{
		   	 cu=cu->prev;
		   }
	   }
	   if(t->d>p->d){
	   	p->next=t;
	   }
	   else{
	   	p->prev=t;
	   }
   }
   	
}


//a+b  inorder

void inorder(struct node *headt){
if(headt){
	inorder(headt->prev);
	printf("%d\t",headt->d);
	
	inorder(headt->next);
}
}
//a+b => +ab   preorder
void preorder(struct node *headt){
if(headt){
	printf("%d\t",headt->d);
	preorder(headt->prev);
	preorder(headt->next);
}
}

//ab+        postorder
void postorder(struct node *headt){
if(headt){
	 postorder(headt->prev);
	  postorder(headt->next);
	printf("%d\t",headt->d);

	
}

	

	
}

int main(){
	append(50);
	append(60);
	
	append(40);
	
	append(55);
	
	append(10);
	
	
	
		struct node *headt=head;

	printf("\preorder traversal\t");
	preorder(headt);
	
	headt=head;
	printf("\n\n postorder traversal\t");
	postorder(head);
	
	
		headt=head;
	printf("\n\n inorder traversal\t");
	inorder(head);
	
	return 0;
}
