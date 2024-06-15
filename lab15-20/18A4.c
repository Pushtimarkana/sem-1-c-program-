#include<stdio.h>
float max(float,float,float);
void main(){
	float a,b,c;
	printf("enter 3 value of a and b and c :");
	scanf("%f %f %f",&a,&b,&c);
	float res=max(a,b,c);
	printf("max is:%f",res);
}
float max(float a,float b,float c){
	float res;
	if(a>b){
		if(a>c){
			res=a;
			return res;
		}
		else{
			res=c;
			return res;
		}
	}
	else{
		if(b>c){
			res=b;
			return res;
		}
		else{
			res=c;
			return res;
		}	
	}
}
