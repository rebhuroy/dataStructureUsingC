#include<stdio.h>
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
	 }
	 else{
	 		struct node *ptr;
	 		ptr=head;
	 		
	 		while(ptr->next!=NULL){
	 			ptr=ptr->next;
			 }
			 ptr->next=t;
	 }
     
}
void dis(){
	struct node *ptr;
	 		ptr=head;
	 		while(ptr!=NULL){
	 			printf("%d\t",ptr->d);
	 			ptr=ptr->next;
			 }
}

void createAtBeg(int x){
		struct node *t=create(x);
    
     if(head==NULL){
     	head=t;
	 }
	 else{
	 	t->next=head;
	 	head=t;
	 }
	 
}
void insAtmid(int x,int y){
		struct node *t=create(y);
    	struct node *t1;
	 		t1=head;
	 		while(t1->d!=x){
	 			t1=t1->next;
			 }
			 t->next=t1->next;
			 t1->next=t;
}

void del(int x){
	struct node *t1=head;
	struct node *t2;
	while(t1->d!=x){
				t2=t1;
				t1=t1->next;
	 			
	 		 
			 }
		 
			t2->next=t1->next;
			t1->next=NULL;
}


int main()
{
	append(100);
	append(200);
	append(300);
	append(400);append(500);
	//dis();
	
	createAtBeg(10);	createAtBeg(70);
//	dis();
	
	
	//10 70 100 200 300 55 400 500
	insAtmid(300,55);
		insAtmid(500,65);
	//	dis();

	del(55);
	dis();
	return 0;
	
}
