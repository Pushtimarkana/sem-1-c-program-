#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter the first side of triangle:");
	scanf("%d",&a);
	printf("Enter the second side of triangle:");
	scanf("%d",&b);
	printf("Enter the third side of triangle:");
	scanf("%d",&c);
	if(a==b && b==c && a==c){
		printf("Equilateral triangle");
	}
	else if(a==b || b==c || a==c){
		printf("Isosceles triangle");
	}
	else if((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (c*c)+(b*b)==(a*a)){
		printf("right angle triangle");
	}
	else{
		printf("scalene tringle");
	}
}
