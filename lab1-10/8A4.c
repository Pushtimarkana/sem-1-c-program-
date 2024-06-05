#include<stdio.h>
void main(){
	int n,i,sum;
	i=1,sum=0;
	printf("enter the value of n :");
	scanf("%d",&n);
	while(i<=n){
		sum=sum+i;
		i+=1;	
	}
		printf("%d",sum);
}
