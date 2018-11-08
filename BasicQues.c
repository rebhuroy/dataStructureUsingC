#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int q[MAX];
int f=-1;
int r=-1;
void ins(int );
int del();
int main(){
	ins(5);
	ins(15);
	ins(35);
	ins(45);
	ins(55);
	printf("%d\n",del());
		printf("%d\n",del());
			printf("%d\n",del());
				printf("%d\n",del());
					printf("%d\n",del());
	ins(5);
	ins(15);
	ins(35);
	ins(45);
	ins(55);
	return 0;
}

void ins(int x){
	if(f>r){
		f=r=-1;
	}
	if(r==MAX-1){
		printf("overflow");
		exit(1);
	}
	if(r==-1 && f==-1){
		r=f=0;
	}
	else{
		r++;
	}
	q[r]=x;
}

int del(){
	if((r==-1 && f==-1) ||(f>r)){
		printf("under flow");
		f=r=-1;
		exit(5);
	}
	return q[f++];
}

