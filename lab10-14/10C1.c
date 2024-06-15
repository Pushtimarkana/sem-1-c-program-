#include<stdio.h>
#include<math.h>
void main(){
	int a,rem,sum=0,n,count,A,r;
	printf("Enter the value of a:");
	scanf("%d",&a);
	n=a;
	A=a;
	while(a>0){
		rem=a%10;
		count++;
		a=a/10;
	}
	while(n>0){
		r=n%10;
		sum=sum+pow(r,count);
		n=n/10;
		
	}
	if(A==sum){
		printf("Number is armstrong");
	}
	else{
		printf("Number is not armstrong");
	}
}
