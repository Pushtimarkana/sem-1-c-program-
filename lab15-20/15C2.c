#include<stdio.h>
void main(){
	int i,n,temp,j;
	int a[100];
	printf("enter a size of aray");
	scanf("%d",&n);
	
	printf("enter sorted array\n");
	for(i=0;i<n;i++){
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("enter new value");
	scanf("%d",&temp);
	for(i=0;i<n;i++){
		if(a[i]>temp){
			for(j=n-1;j>=i;j--){
				a[j+1]=a[j];
			}
			 a[i]=temp;
			 }
		}
		
	
	for(i=0;i<=n;i++){
		printf("%d",a[i]);
	}	
}
