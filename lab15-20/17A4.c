#include<stdio.h>
void main(){
	int a,b,temp,*c,*d;
	printf("enter value of a and b:");
	scanf("%d %d",&a ,&b);
	temp=a;
	a=b;
	b=temp;
	c=&a;
	d=&b;
	printf("value:%d",*c);
	printf("value:%d",*d);
}
