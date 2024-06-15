#include<stdio.h>
void main(){
	int a,b,x,y,t,hcf,lcm;
	printf("Enter the value of a and b:");
	scanf("%d %d",&a ,&b);
	x=a;
	y=b;
	while(y>0){
		t=y;
		y=x%y;
		x=t;
		
	}
	hcf=x;
	lcm=(a*b)/hcf;
	printf("hcf%d and %d = %d\n",a,b,hcf);
	printf("lcm%d and %d = %d\n",a,b,lcm);
}
