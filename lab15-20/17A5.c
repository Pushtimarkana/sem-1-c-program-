#include<stdio.h>
void main(){
	int n,i,*p;
	printf("enter size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("enter element of a[%d]",i);
		scanf("%d",&a[i]);
	}
	p=&a;
	for(i=0;i<n;i++){
		printf("%d\n",*(p+i));
	}
}
