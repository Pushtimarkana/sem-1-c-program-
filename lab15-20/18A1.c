#include<stdio.h>
void add(int,int);
void main(){
	int a,b;
	printf("enter two number a and b:");
	scanf("%d %d",&a,&b);
	add(a,b);
}
void add(int a,int b){
	printf("sum is:%d",a+b);
}
