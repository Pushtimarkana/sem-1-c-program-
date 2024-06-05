#include<stdio.h>
void main(){
	int x,y,i=1,sum=1;
	printf("enter the value of x and y:");
	scanf("%d %d",&x ,&y);
	while(i<=y){
		i++;
		sum=sum*x;
		
	}
	printf("%d",sum);
}
