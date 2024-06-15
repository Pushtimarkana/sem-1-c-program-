#include<stdio.h>
void main(){
	int i,height=0,weight=0,hei[5],wei[5];
	
	for(i=0;i<5;i++){
		printf("enter height hei[%d]",i);
		scanf("%d",&hei[i]);
	}
	for(i=0;i<5;i++){
		printf("enter weight wei[%d]",i);
		scanf("%d",&wei[i]);
	}
	for(i=0;i<5;i++){
		if(hei[i]>170){
			height++;
		}
		else if(wei[i]<50){
			weight++;
		}
	}
	printf("number of person height greater than 170=%d\n",height);
	printf("number of person weight less than 50=%d\n",weight);
}
