#include<stdio.h>
void main(){
	char c;
	printf("Enter the character");
	scanf(" %c",&c);
	if(c>='A' && c<='Z'){
		printf("c is capital latter");
	}
	else if(c>='a' && c<='z'){
		printf("c is small latter");
	}
	else if(c>='0' && c<='9'){
		printf("c is digit");
	}
	else{
		printf("c is special character");
	}
}
