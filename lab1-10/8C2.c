#include<stdio.h>
void main(){
	int i=1,n,s,sum=0;
	printf("enter the last digit of series:");
	scanf("%d",&n);
	while(i<=n){
		s=i*i;
		sum=sum+s;
		i++;
		printf("%d+",s);
	}
	printf("=%d",sum);
}
