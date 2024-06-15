#include<stdio.h>
int main(){
	int a,r;
	printf("enter the value of a:");
	scanf("%d",&a);
	while(a>0){
		r=a%10;
		printf("%d",r);
		a=a/10;
	}
}
