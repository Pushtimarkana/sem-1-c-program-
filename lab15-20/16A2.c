#include<stdio.h>
void main(){
	int i,j,zero=0,pos=0,neg=0;
	int a[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter element a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			if(a[i][j]==0){
				zero++;
			}
			else if(a[i][j]>0){
				pos++;
			}
			else if(a[i][j]<0){
				neg++;
			}
		}
	}
	printf("the number is zero is:%d\n",zero);
	printf("the number is pos is:%d\n",pos);
	printf("the number is neg is:%d\n",neg);
}
