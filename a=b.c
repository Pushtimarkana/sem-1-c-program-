#include<stdio.h> 
void main()
{
	int temp,a,b;
	printf("value of a");
	scanf("%d",&a);
	printf("value of b");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("a=%d, b=%d",a,b);
} 
