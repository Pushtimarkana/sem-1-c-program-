#include<stdio.h>
void main(){
	int a,b,c,ans;
	printf("enter the value of a and b and c:");
	scanf("%d %d %d",&a ,&b ,&c);
	ans=(a>b)?printf("multiply:%d",a*c):printf("multiply:%d",b*c);
}
