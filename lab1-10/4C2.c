//Updates to keyboard shortcuts … On Thursday, August 1, 2024, Drive keyboard 
//shortcuts will be updated to give you first-letters navigation.Learn more
#include<stdio.h>
void main(){
	int a,Y,W,D;
	printf("Enter days");
	scanf("%d",&a);
	
		Y=a/365;
		W=((a-(Y*365))/7);
		D=(a%365)-(W*7);
		printf("days is %d %d %d",Y,W,D);
}
