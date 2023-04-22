//function type 4

#include<stdio.h>
 float salary(int);
 void main()
 {
 	int _salary;
 	
 	printf("Enter the basic salary of the employee : ");
 	scanf("%d",&_salary);
 	
 	float total_salary = salary(_salary);
 	printf("The total salary of the employee is %.2f",total_salary);
 }
 float salary(int salary)
 {
 	float da,ta,hra,total_salary;
 	
 	if(salary<=5000)
 	{
 		da = 0.1*salary;
 		ta = 0.15*salary;
 		hra = 0.2*salary;
	 }
	 else
	 {
	 	da = 0.15*salary;
 		ta = 0.25*salary;
 		hra = 0.3*salary;
	 }
	 total_salary = salary + da + ta + hra;
	 printf("basic salary of the employee is %d\n",salary);
	 printf("daily allowance is %.2f\n",da);
	 printf("travelling allowance is %.2f\n",ta);
	 printf("house rent allowannce is %.2f\n",hra);
	 return total_salary;
 }
