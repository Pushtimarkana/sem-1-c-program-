#include<stdio.h>
void main(){
	 int i,n,count=0;
	 printf("enter a size of array :");
	 scanf("%d",&n);
	 int a[n];
	 for(i=0;i<n;i++){
	 	printf("a[%d]",i);
	 	scanf("%d",&a[i]);
	 	if(a[i]%3==0){
	 		count++;
		 }
	 }
	 printf("number of element which divisable by 3=%d",count);
}

