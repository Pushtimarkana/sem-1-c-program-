#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter a;");
    scanf("%d",&a);
    printf("Enter b;");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("c and a:%d",c,b);
}
