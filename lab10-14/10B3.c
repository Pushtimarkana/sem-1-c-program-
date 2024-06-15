#include<stdio.h>
void main(){
	int a,rem,sum=0,n;
	
	printf("Enter the value of a:");
	scanf("%d",&a);
	n=a;
	while(a>0){
		rem=a%10;
		sum=sum*10+rem;
		a=a/10;
	}
	if(n==sum){
		printf("Number is palindrom");
	}
	else{
		printf("Number is not palindrom");
	}
}
