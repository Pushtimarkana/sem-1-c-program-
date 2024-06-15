#include<stdio.h>
void main(){
	int i,*ip;
	float j,*fp;
	double d,*dp;
	char c,*cp;
	printf("inter value of i:");
	scanf("%d",&i);
	ip=&i;
	printf("inter value of j:");
	scanf("%f",&j);
	fp=&j;
	printf("inter value of d:");
	scanf("%lf",&d);
	dp=&d;
	printf("inter value of c:");
	scanf(" %c",&c);
	cp=&c;
	printf("adress of int:%d\n",ip);
	printf("adress of float:%d\n",fp);
	printf("adress of double:%d\n",dp);
	printf("adress of chara:%d\n",cp);
	
}
