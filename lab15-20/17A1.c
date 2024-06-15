#include<stdio.h>
void main(){
	int *a;
	int x=10;
	a=&x;
	printf("adress of a :%d\n",a);
	printf("value of a:%d\n",*a);
}
