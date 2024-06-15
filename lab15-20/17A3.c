#include<stdio.h>
void main(){
	int a,b,*c,*d;
	printf("enter value of a and b:");
	scanf("%d %d",&a ,&b);
	c=&a;
	d=&b;
	printf("sum is=%d",*c+*d);
}
