#include<stdio.h>
void main(){
	int a,i,fact=1;
	printf("enter the value of a :");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		fact=fact*i;
	}
	printf("factorial of number=%d",fact);     
}
