#include<stdio.h>
struct book{
	char book_title[50];
	char author[50];
	int publication;
	float price;
};
void main(){
	int a[3],i;
	struct book b[3];
	for(i=0;i<3;i++){
		printf("enter book title:");
		scanf("%s",b[i].book_title);
		printf("enter book author:");
		scanf("%s",b[i].author);
		printf("enter book publication:");
		scanf("%d",&b[i].publication);
		printf("enter book price:");
		scanf("%f",&b[i].price);
	}
	for(i=0;i<3;i++){
		printf("book tittle is: %s\n",b[i].book_title);
		printf("book'sauthor is: %s\n",b[i].author);
		printf("book publication is: %d\n",b[i].publication);
		printf("book price is: %f\n",b[i].price);
	}
}
