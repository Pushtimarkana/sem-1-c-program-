#include<stdio.h>
void main(){
	int a,b;
	printf("Enter the value of a");
	scanf("%d",&a);
	printf("Enter the value of b");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("new value of a and b %d,%d",a,b);
}
