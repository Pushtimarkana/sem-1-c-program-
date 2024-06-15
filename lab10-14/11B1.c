#include<stdio.h>
void main(){
	int n,a=0,b=1,i,c;
	printf("enter the last number of fibonacci series :");
	scanf("%d",&n);
	printf("0+1");
	for(i=3;i<=n;i++){
		c=a+b;
		printf("+%d",c);
		a=b;
		b=c;
		
	}
}
