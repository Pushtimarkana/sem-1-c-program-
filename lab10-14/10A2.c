#include<stdio.h>
void main(){
	int a=1,sum=0,N=-1;
	float avg;
	//printf("enter the value of a:");
	//scanf("%d",&a);
	while(a!=0){
		printf("enter a number and press 0 for exit");
		scanf("%d",&a);
		sum=sum+a;
		N=N+1;
	}
	avg=sum/N;
	printf("%d %f",sum ,avg);
}
