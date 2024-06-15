#include<stdio.h>
void main(){
	int i,j,n=5,temp=0;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			if(j%2==1){
				printf("1");
			}
			else{
				printf("%d",temp);
			}
			temp=0;
		}
		printf("\n");
	}
}
