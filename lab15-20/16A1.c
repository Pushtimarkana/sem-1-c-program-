#include<stdio.h>
void main(){
	int i,j,m,n;
	printf("enter size of array:");
	scanf("%d %d",&m,&n);
	int a[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("enter element a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d",a[i][j]);
			
		}
		printf("\n");
	}
}
