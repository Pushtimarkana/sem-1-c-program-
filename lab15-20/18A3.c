#include<stdio.h>
void interest(int,int,int);
void main(){
	int p,r,n;
	printf("enter 3 value of p and r and n:");
	scanf("%d %d %d",&p,&r,&n);
	interest(p,r,n);

}
void interest(int p,int r,int n){
	float ans=(p*r*n)/100;
	printf("interest is=%f",ans);
}
