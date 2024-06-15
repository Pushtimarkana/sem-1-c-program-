#include<stdio.h>
void main(){
	int n,i=1;
	printf("enter the value of n for multiplication table:");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
	    printf("%d * %d = %d\n",n,i,n*i);
	}
	
}
