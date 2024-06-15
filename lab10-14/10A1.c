#include<stdio.h>
void main(){
	int a,l,rem,sum=0;
	printf("enter the value of a:");
	scanf("%d",&a);
	if(a>0){
		l=a%10;
	}
	while(a>10){
		rem=a%10;
		a=a/10;
	}
	sum=l+a;
	printf("%d",sum);
}
