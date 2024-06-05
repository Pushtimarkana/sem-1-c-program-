#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter the value of a");
	scanf("%d",&a);
	printf("Enter the value of b");
	scanf("%d",&b);
	printf("Enter the value of c");
	scanf("%d",&c);
	if(b>a){
		if(b>c){
			printf("b is largest");
		}
		else{
			printf("c is largest");
		}
	}
		else{
		
		if(a>c){
			printf("a is largest");
		}
			else{
			printf("c is largest");
		}
	}
}
