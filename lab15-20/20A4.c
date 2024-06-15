#include<stdio.h>
struct student{
	char name[50];
	float percentage;
	int age;
};
void main(){
	int a[5],i;
	struct student s[5];
	for(i=0;i<5;i++){
		printf("enter student name:");
		scanf("%s",s[i].name);
		printf("enter student percentage:");
		scanf("%f",s[i].percentage);
		printf("enter student name:");
		scanf("%d",s[i].age);
	}
	for(i=0;i<5;i++){
		printf("student name is:%s",s[i].name);
		printf("student percentage is:%f",s[i].percentage);
		printf("student age is:%d",s[i].age);
	}
}
