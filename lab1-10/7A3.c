#include<stdio.h>
void main(){
	int a,b;
	char o;
	float ans;
	printf("enter the value of a and b:");
	scanf("%d %d",&a ,&b);
	printf("enter the +,-,*,/ for o:");
	scanf(" %c",&o);
	switch(o){
		case '+':ans=a+b;
			printf("%f",ans);
			break;
		case '-':ans=a-b;
			printf("%f",ans);
			break;
		case '*':ans=a*b;
			printf("%f",ans);
			break;
		case '/':ans=a/b;
			printf("%f",ans);
			break;
		default : ("enter invalid value");
		break;
	}
}
