#include<stdio.h>
void arr(int a[],int);
void main(){
	int i,n;
	printf("enter size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("enetr element a[%d]",i);
		scanf("%d",&a[i]);
	}
	arr(a,n);
}
void arr(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	
}
