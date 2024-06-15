#include<stdio.h>
#include<string.h>
int find(char ch,char a[]);
void main(){
	 int i;
	 char a[100],ch;
	 printf("enter a string :");
	 gets(a);
	 printf("enter character:");
	 scanf("%c",&ch);
	int res=find(ch,a);
	printf("endex is %d",res);
	
}
int find(char ch,char a[]){
	int i,res;
	for(i=0;a[i]!='\0';i++){
	 	if(a[i]==ch){
	 		return i;
		 }
}
}
