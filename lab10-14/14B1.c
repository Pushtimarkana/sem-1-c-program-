#include<stdio.h>
void main(){
	int i,j,n,sum=0,count=0;
	int avg;
	printf("enter the size of array");
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++){
		printf("enter the element of num[%d]",i);
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	avg=sum/n;
	printf("avg=%d",avg);
	for(i=0;i<n;i++){
		if(num[i]>avg){
			count++;
		}
	}
	printf("count=%d\n",count);
}
