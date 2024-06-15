#include<stdio.h>
void main(){
		int i,n,num[n],even=0,odd=0;
	printf("enter last digit :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	   printf("num[%d] :",i);
	   scanf("%d",&num[i]);	
	}
	for(i=0;i<n;i++){
		if(num[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	printf("even number %d\n",even);
	printf("odd number %d\n",odd);
}
