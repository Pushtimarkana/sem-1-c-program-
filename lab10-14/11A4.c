#include<stdio.h>
void main(){
	int x,y,i,a=1;
	printf("enter the value of x and y :");
	scanf("%d %d",&x ,&y);
	for(i=0;i<y;i++){
		a=a*x;
	}
	printf("x^y=%d",a);
}
