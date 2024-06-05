#include<stdio.h>
void main(){
	int n1,n2,i=n1;
	printf("enter the value of n1,n2");
	scanf("%d %d",&n1 ,&n2);
	while(n1<=i && i<=n2){
		if(i%2==0){
			printf("%d",i);
		}
		i=i+1;
	}
}

