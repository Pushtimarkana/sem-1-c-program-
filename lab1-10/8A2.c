#include<stdio.h>
void main(){
	int n,i;
	i=1;
	printf("enter the value for n :");
	scanf("%d",&n);
	while(i<=n){
		if(i%2==1){
			printf("%d\n",i);
		}
		i=i+1;
	}
}
