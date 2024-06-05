#include<stdio.h>
void main(){
	char x ;
	printf("enter the value x");
	scanf(" %c",&x);
	((x>='A' && x<='Z') || (x>='a' && x<='z'))?printf("the charcter is alphabet"):printf("the charcter is not alphabet");
}
