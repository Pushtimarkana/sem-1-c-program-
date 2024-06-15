#include<stdio.h>
#include<string.h>
void main(){
	int i;
	char a[100],b[100];
	printf("enter a string :");
	gets(a);
	printf("enter 2 string :");
	gets(b);
	int lenth =strlen(a);
	printf("%d",lenth);
	printf("\n");
	int result=strcmp(a,b);
	if(result==0){
		printf("string is equal");
	}
	else if(result>0){
		printf("string 1 is greater");
	}
	else{
		printf("string 1 is less");
	}
	printf("\n");
		strcpy(a,b);
		printf("%s",a);
	printf("\n");
		strrev(b);
		printf("%s",b);
	printf("\n");
		strlwr(b);
		printf("%s",b);
	printf("\n");
		strupr(a);
		printf("%s",a);
	printf("\n");
		strcat(a,b);
		printf("%s",a);
}
