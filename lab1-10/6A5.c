#include<stdio.h>
void main(){
	int m1,m2,m3,m4,m5;
	float per;
	printf("enter the first subject's mark");
	scanf("%d",&m1);
	printf("enter the second subject's mark");
	scanf("%d",&m2);
	printf("enter the third subject's mark");
	scanf("%d",&m3);
	printf("enter the forth subject's mark");
	scanf("%d",&m4);
	printf("enter the fifth subject's mark");
	scanf("%d",&m5);
	per=(m1+m2+m3+m4+m5)/5.0;
	if(per<=35){
		printf("fail");
	}
	else if(per>=36 && per<=45){
		printf("pass class");
	}
	else if(per>=46 && per<=60){
		printf("second class");
	}
	else if(per>=61 && per<=70){
		printf("first class");
	}
	else{
		printf("distinction");
	}
}
