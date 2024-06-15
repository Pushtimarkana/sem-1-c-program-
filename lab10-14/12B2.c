#include<stdio.h>
void main(){
	int n,i,j;
	float fact=1.0,e=1.0;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			fact=fact*j;
		}
		e=e+(1/fact);
	}
	printf("%f",e);
}
