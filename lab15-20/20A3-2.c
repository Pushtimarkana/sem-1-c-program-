#include<stdio.h>
struct student{
	char name[9];
	int a;
	int b;
	double c;
};
void main(){
	struct student s1;
	printf("the size of structure:%d",sizeof(s1));
}
