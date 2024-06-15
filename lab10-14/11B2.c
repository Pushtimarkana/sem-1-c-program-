#include<stdio.h>
void main(){
	int frq[10]={0},n,rem,i;
	printf("enter the value for count ferqency:");
	scanf("%d",&n);
	
	while(n>0){
		rem=n%10;
		frq[rem]++;
		n=n/10;
	}
	
	for(i=0;i<=10;i++){
		printf("feq=%d\n",frq[i]);
	}
}
