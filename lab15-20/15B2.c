#include<stdio.h>
void main(){
	int i,j,n,a[n];
	printf("enter a size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter element of a[%d]",i);
		scanf("%d",&a[i]);	
	}
  	int si=0,ei=n-1,temp;
  	
  	while(si<ei){
  		temp=a[si];
  		a[si]=a[ei];
  		a[ei]=temp;
  		si++;
  		ei++;
	  }
	  for(i=0;i<n;i++){
	  	printf("%d\n",a[i]);
	  }
}
