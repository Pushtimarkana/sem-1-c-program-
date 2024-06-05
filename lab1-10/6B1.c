#include<stdio.h>
void main(){
	int a;
	float bill;
	printf("Enter the unit charge:");
	scanf("%d",&a);
	if(a<=50){
		bill=a*0.5;
	}
	else if(a>=51 && a<=150){
		bill=(a-50)*0.75+25;
	}
	else if(a>=151 && a<=250){
		bill=(a-150)*1.2+25+75;
	}
	else if(a>=251){
		bill=(a-250)*1.5+25+75+120;
	}
	bill=bill+(bill*0.2);
	printf("the final  bill is:%f",bill);
}
