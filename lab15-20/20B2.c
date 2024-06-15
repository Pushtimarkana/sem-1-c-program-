#include<stdio.h>
struct Date{
	int dd;
	int mm;
	int yy;
};
struct emp{
	char name[30];
	struct Date bd;
	struct Date jd;
};
void main(){
	struct emp e1;
	printf("enter employ name:");
	scanf("%s",e1.name);
	printf("enter birth date,month,year:");
	scanf("%d %d %d",&e1.bd.dd,&e1.bd.mm,&e1.bd.yy);
	printf("Enter joining date month and year:");
	scanf("%d %d %d",&e1.jd.dd,&e1.jd.mm,&e1.jd.yy);
	
	printf("employ name is:%s\n",e1.name);
	printf("employ birth is:%d %d %d\n",e1.bd.dd,e1.bd.mm,e1.bd.yy);
	printf("employ joining date is:%d %d %d\n",e1.jd.dd,e1.jd.mm,e1.jd.yy);
}
