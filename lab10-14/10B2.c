#include<stdio.h>
void main(){
	int a,i=2,flag=0;
	printf("Enter the value of a:");
	scanf("%d",&a);
	while(i<a){
		if(a%i==0){
			flag=flag+1;
		}
		i++;
	}
	if(flag==0){
		printf("Number is prime");
	}
	else{
		printf("Number is not prime");
	}
	
}
