#include<stdio.h>
void main(){
	int a;
	printf("Enter the value of a");
	scanf("%d",&a);
	if(a&1){
		printf("the last digit of number is odd");
	}
	else{
		printf("the last digit of number is even");
	}
}
