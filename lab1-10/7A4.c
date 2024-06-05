#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter the value of a and b and c:");
	scanf("%d %d %d",&a ,&b ,&c);
	if(a>b && a>c){
		printf("a is largest");
	}
	else if(c>b && c>a){
		printf("c is largest");
	} 
	else if(b>a && b>c){
		printf("b is largest");
	} 
}
