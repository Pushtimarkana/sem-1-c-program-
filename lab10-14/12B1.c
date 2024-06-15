#include<stdio.h>
void main(){
	int n,i,sum=0,a;
	printf("enter the value for n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("(");
		for(a=1;a<=i;a++){
		printf("%d+",a);
		sum=sum+a;
	}
	printf(")");
	printf("+");
	}
	printf("=%d\n",sum);
}
