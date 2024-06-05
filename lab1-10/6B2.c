#include<stdio.h>
void main(){
	int a,b,c,D;
	float x,y;
	printf("Enter the cofficient x^2:");
	scanf("%d",&a);
	printf("Enter the cofficient x:");
	scanf("%d",&b);
	printf("Enter the constant:");
	scanf("%d",&c);
	D=(b*b)-(4*a*c);
	if(D<0){
		printf("both roots are imginary");
	}
	else if(D==0){
		x=-b/(2*a);
		printf("both roots=%f",x);
	}
	else if(D>0){
		x=(-b+(D)^1/2)/(2*a);
		y=(-b-(D)^1/2)/(2*a);
		printf("root is:%f",x);
		printf("root is:%f",y);
	}
}
