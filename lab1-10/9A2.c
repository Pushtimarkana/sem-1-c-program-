#include<stdio.h>
void main(){
	int n,i=1;
	printf("enter a number for multiplication table:");
	scanf("%d",&n);
	while(i<=10){
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
	}
}
