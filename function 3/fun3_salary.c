//Function type 3

 #include<stdio.h>
 void totalSalary(int);
 void main(){
 	
 	int _salary;
 	printf("Enter the basic salary of the employee: ");
 	scanf("%d",&_salary);
 	
 	totalSalary(_salary);
 }
 void totalSalary(int salary)
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
	 total_salary = salary + da + ta + hra ;
	 
	 printf("basic salary of the employee is %d\n",salary);
	 printf("daily allowance of the employee is %.2f",da);
	 printf("\ntravelling allownace of the employee is %.2f",ta); 
	 printf("\nhouse rent allowance of the employee is %.2f",hra);
	 printf("\ntotal salary of the employee is %.2f",total_salary);
	 
 }
