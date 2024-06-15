#include<stdio.h>
struct student{
	char name[100];
	int roll;
};
void main(){
	struct student s,*ptr;
	ptr=&s;
	printf("enter name :");
	scanf("%s",ptr->name);
	printf("enter roll no:");
	scanf("%d",&ptr->roll);
	printf("name is:%s\n",ptr->name);
	printf("roll no is:%d\n",ptr->roll);
}
