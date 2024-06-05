#include<stdio.h>
void main(){
	float a,HRN,DA,grosssalary;
	printf("Enter the basic salary");
	scanf("%f",&a);
	if(a>=10000){
		HRN=a*0.2;
		DA=a*0.8;
	}
	else if(a>=20000){
		HRN=a*0.25;
		DA=a*0.9;
	}
	else if(a>=30000){
		HRN=a*0.3;
		DA=a*0.95;
	}
	grosssalary=a+HRN+DA;
	printf("the gross salary is %f",grosssalary);
}
