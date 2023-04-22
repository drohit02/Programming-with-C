//function type 1

#include<stdio.h>
 void salary();
 void main() {
 	salary();
 }
 
 void salary() {
 	
 	int salary;
 	float da,ta,hra,total_salary;
 	
 	printf("enter the salry of the employee : ");
 	scanf("%d",&salary);
 	
 	if(salary<=5000)
 	{
 		da = 0.1*salary;
 		ta = 0.2*salary;
 		hra = 0.25*salary;
	 }
	 else
	 {
 		da = 0.15*salary;
 		ta = 0.25*salary;
 		hra = 0.3*salary;
	 }
	 total_salary = da + ta + hra + salary ;
	 printf("the allowance on the basic salary %d are \n",salary);
	 printf("daily allowance is : %.2f\n",da);
	 printf("travelling allowance is : %.2f\n",ta);
	 printf("rent allowance is : %.2f\n",hra);
	 printf("total salary base on basic salary is : %.2f",total_salary);
 }
