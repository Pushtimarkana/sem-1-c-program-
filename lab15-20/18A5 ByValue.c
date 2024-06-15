#include<stdio.h>
void swep(int ,int);
void main(){
	int a,b;
		printf("enter two number a and b:");
		scanf("%d %d",&a,&b);
		printf("before swep %d %d",a,b);
		swep(a,b);
		printf("after swep %d %d",a,b);
}
void swep(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
