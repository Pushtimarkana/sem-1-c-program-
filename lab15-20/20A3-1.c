#include<stdio.h>
union student{
	char name[9];
	int a;
	int b;
	double c;
};
void main(){
	union student s1;
	printf("the size of union:%d",sizeof(s1));
}
