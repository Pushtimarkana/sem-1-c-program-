#include<stdio.h>
void max(int,int);
void min(int,int);
void main(){
	int a,b;
	printf("enter two number a and b:");
	scanf("%d %d",&a,&b);
	max(a,b);
	min(a,b);
}
void max(int a,int b){
	if(a>b){
		printf("max is :%d",a);
	}
	else{
		printf("max is :%d",b);
	}
}
void min(int a,int b){
	if(a<b){
		printf("min is :%d",a);
	}
	else{
		printf("min is :%d",b);
	}
}
