#include<stdio.h>
#include<string.h>
char rep(char ch,char a[],int b);
void main(){
	 int b;
	 char a[100],ch;
	 printf("enter a string :");
	 gets(a);
	 printf("enter character:");
	 scanf("%c",&ch);
	 printf("enter index which you replace character :");
	 scanf("%d",&b)
	char res=rep(ch,a,b);
	printf("endex is %c",res);
	
}
char rep(char ch,char a[],int b){
	int i,res;
	for(i=0;a[i]!='\0';i++){
	 	if(a[i]==b){
	 		a[i]=ch;
		 }
	}
	return a;
}


