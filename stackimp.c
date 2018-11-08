#include<stdio.h>
#include<stdlib.h>
struct node {
	int d;
	struct node *next;
};
struct node *tos=NULL;



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

void puhs(int x){
	struct node *t=create(x);
	t->d=x;
	t->next=NULL;
	if(tos==NULL)
	{
		tos=t;
	}
    else{
    	t->next=tos;
    	tos=t;
	}
}



int pop(){
struct node *ptr=tos;
	int p=tos->d;
	
	tos=tos->next;
 	ptr->next=NULL;

//tos=ptr->next;

	
	
//	free(ptr);
	return p;
	
    
}





void dis(){
	struct node *ptr;
	 		ptr=tos;
	 		while(ptr!=NULL){
	 			printf("%d\t",ptr->d);
	 			ptr=ptr->next;
			 }
}





int main()
{
	
	puhs(10);
		puhs(20);	puhs(50);	puhs(80);	puhs(90);
		
		dis();
		
		
		
	printf("%d",pop());
			printf("%d",pop());
				printf("%d",pop());
					printf("%d",pop());
						printf("%d",pop());
	
	return 0;
	
}
