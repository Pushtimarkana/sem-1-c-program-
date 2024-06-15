#include<stdio.h>
int fact(int);
void main(){
	int n;
	printf("enter value for n:");
	scanf("%d",&n);
	int res=fact(n);
	printf("%d",res);
}
int fact(int n){
	int i,res=1;
	for(i=1;i<=n;i++){
		res=res*i;
	}
	return res;
}
