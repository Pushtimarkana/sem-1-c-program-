#include<stdio.h>
void main(){
	int i=1,n,o=0,e=0,sum=0;
	printf("enter the last digit of series:");
	scanf("%d",&n);
	while(i<=n){
		if(i%2==0){
		e=e+i;
		printf("-%d",i);	
		}
		else{
			o=o+i;
			printf("+%d",i);
		}
		i++;
	sum=sum+o-e;	
	}
	printf("=%d",sum);
}
