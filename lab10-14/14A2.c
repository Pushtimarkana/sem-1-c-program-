#include<stdio.h>
void main(){
	int i,n,num[n],pos=0,neg=0;
	printf("enter last digit :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	   printf("num[%d] :",i);
	   scanf("%d",&num[i]);	
	}
	for(i=0;i<n;i++){
		if(num[i]>=0){
			pos++;
		}
		else{
			neg++;
		}
	}
	printf("positive number %d\n",pos);
	printf("negative number %d\n",neg);
}
