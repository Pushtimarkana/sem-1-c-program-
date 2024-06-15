#include<stdio.h>
void main(){
	int a,i=2,count=0;
	printf("enter the value of a:");
	scanf("%d",&a);
	while(i<a){
		if(a%i==0){
			count=count+1;
		}
		i++;
	}
	if(count==0){
		printf("number is prime");
	}
	else{
		printf("number is not prime");
	}
	
}
