#include<stdio.h>
void main(){
	int i,j,m,n;
	printf("enter size of array:");
	scanf("%d %d",&m,&n);
	int a[m][n],b[m][n],c[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("enter element a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("enter element b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
}
