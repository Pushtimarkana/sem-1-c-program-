#include<stdio.h>
#include<string.h>
char *rep(char *a,char ch,char newchar);
void main(){
	 char a[100],ch,newchar;
	 printf("enter a string :");
	 //gets(a);
	 scanf("%s",&a);
	 //fflush is temporary buffer
	 fflush(stdin);
	 printf("enter character:");
	 scanf("%c",&ch);
	 fflush(stdin);
	printf("enter new character:");
	 scanf("%c",&newchar);
	char *res=rep(a,ch,newchar);
	printf("modified string is: %s",res);
	
}
char *rep(char *a,char ch,char newchar){
	int i;
	for(i=0;a[i]!='\0';i++){
	 	if(a[i]==ch){
	 		a[i]=newchar;
		 }
	}
	return a;
}

