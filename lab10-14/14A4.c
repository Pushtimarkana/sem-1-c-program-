#include<stdio.h>
void main(){
	int i,n,num[n],max,min,sum=0,avg=0;
	printf("enter last digit :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
	  	 printf("num[%d] :",i);
	  	 scanf("%d",&num[i]);
		   sum=sum+num[i];
		  
	}
	 avg=sum/n;
	max=num[0];
	min=num[0];
	for(i=0;i<n;i++){
		if(num[i]>max){
			max=num[i];
		}
		if(num[i]<min){
			min=num[i];
		}
	}
	printf("the sum of number :%d\n",sum);
	printf("the avg of number :%d\n",avg);
	printf("max of number :%d\n",max);
	printf("min of number :%d\n",min);
}
