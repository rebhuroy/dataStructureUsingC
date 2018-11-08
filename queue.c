#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int f=-1;
int r=-1;
int ar[MAX];
void ins(int );
int del();
int del(){
	if((f==-1)&&(r==-1)||(f>r)){
		printf("underflow");
		exit(2);
	}
	return ar[f++];
}

void ins(int x){
	if(r==MAX-1){
		printf("overflow");
		exit(1);
	}
	if((f==-1)&&(r==-1)){
		f=r=0;
	}
	else{
		r++;
	}
	
	ar[r]=x;
}
int main(){
//	printf("%d",del());
ins(10);
ins(20);
ins(30);
ins(40);
ins(50);
ins(40);

printf("%d",del());
printf("%d",del());
printf("%d",del());
printf("%d",del());
printf("%d",del());
printf("%d",del());
return 0;
}
