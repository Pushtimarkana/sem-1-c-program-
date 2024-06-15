#include<stdio.h>
void main(){
	int a,i=1,sum=0,n;
	printf("Enter the value of a:");
	scanf("%d",&a);
	n=a;
	while(i<a){
		if(a%i==0){
			sum=sum+i;	
		}
		i=i+1;
	}
	if(n==sum){
		printf("Number is perfect");
	}
	else{
		printf("Number is not perfect");
	}
}
