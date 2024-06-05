#include<stdio.h>
void main(){
	int a,i=1,o=0,e=0;
	printf("enter any number");
	scanf("%d",&a);
	while(i<10){
	printf("enter any number");
	scanf("%d",&a);	
		if(a%2==0){
			e=e+1;
		}
		else{
			o=o+1;
		}
		i=i+1;
	
	}
	printf("\n%d",e);
	printf("\n%d",o);
}
