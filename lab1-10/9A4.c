#include <stdio.h>
void main(){
	int n,i=1,f;
	printf("enter the value of n:");
	scanf("%d",&n);
	while(i<=n){
		f=f*i;
		i++;	
	}
	printf("%d",f);
}
