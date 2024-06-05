#include<stdio.h>
void main(){
	int a,b,c,ans;
	printf("Enter the value of a");
	scanf("%d",&a);
	printf("Enter the value of b");
	scanf("%d",&b);
	printf("press + for addition,- for subtraction,* for multiplication,/ for division");
	scanf(" %c",&c);
	if(c=='+'){
		ans=a+b;
		printf("the answer is %d",ans);
	}else if(c=='-'){
	 	ans=a-b;
	 	printf("the answer is %d",ans);
	}else if(c=='*'){
		ans=a*b;
		printf("the answer is %d",ans);
	}else if(c=='/'){ 
		if(b==0){
			printf("answer is infinite");
		}
		else{
		ans=a/b;
		printf("the answer is %d",ans);
	}
	}
	else {
		printf("invalide operator");
	}
	
}
