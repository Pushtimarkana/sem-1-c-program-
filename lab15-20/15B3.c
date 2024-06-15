#include<stdio.h>
void main(){
	int i,n;
	printf("enter a size of rray");
	scanf("%d",&n);
	int a[n],temp,j=n-1;
	for(i=0;i<n;i++){
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n/2;i++){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		j--;
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}
