#include<stdio.h>
void main(){
	 int i,n,d,count=0;
	 printf("enter a size of array :");
	 scanf("%d",&n);
	 int a[n];
	 for(i=0;i<n;i++){
	 	printf("a[%d]",i);
	 	scanf("%d",&a[i]);
	 }
	 printf("enter number what you want search:");
	 scanf("%d",&d);
	 for(i=0;i<n;i++){
	 	if(a[i]==d){
	 		count=1;
	 		break;
		 }
		 
		 }
		 if (count==0){
	 	printf("not found");
	 }
	 else{
	 	printf("index of digit=%d",i);
	 }
}
