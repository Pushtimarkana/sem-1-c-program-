#include<stdio.h>
#include<math.h>
void main(){
	int i,sum=0,n,malti=1;
	float avg=0,s=0,geo=1.0,har=1.0;
	printf("enter the size of array");
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++){
		printf("enter the element of num[%d]",i);
		scanf("%d",&num[i]);
		sum=sum+num[i];
		malti=malti*num[i];
		s=s+1.0/num[i];
	}
	avg=sum/n;
	geo=pow(malti,1/n);
	har=n/s;
	printf("average=%f\n",avg);
	printf("geometric=%f\n",geo);
	printf("harmonic=%f\n",har);
}
