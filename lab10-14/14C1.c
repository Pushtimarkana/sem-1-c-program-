#include<stdio.h>
void main(){
	int i,j,n,count=0;
	printf("enter the size of array");
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++){
		printf("enter the element of num[%d]",i);
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(num[i]==num[j]){
				count++;
				break;
			}
		}
	}
	printf("number of duplicate element : %d",count);
}
