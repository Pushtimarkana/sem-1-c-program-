#include<stdio.h>
void main(){
	int a,H,M,S;
	printf("Enter secound");
	scanf("%d",&a);
	
		H=a/3600;
		M=((a/60)-(H*60));
		S=a%60;
		printf("time is %d %d %d",H,M,S);
}
