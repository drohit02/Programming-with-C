//Assignment 28:struct pass by value

#include<string.h>
#include<stdio.h>

	struct employee
	{
		int empId;
		char empName [20];
		int salary;
	};
	
	struct employee storeEmp(struct employee);
	void displayEmp(struct employee);
	void main()
	{
		printf("Program:Struct by pass by value for Employee\n");
		struct employee emp1;
		
		emp1 =storeEmp(emp1);
			  displayEmp(emp1);
	}
	struct employee storeEmp(struct employee emp2)
	{
		printf("\n\nEnter the Name of Employee  : ");
		gets(emp2.empName);
		printf("\nEnter the Employee ID : ");
		scanf("%d",&emp2.empId);
		printf("\nEnter the salary of Employee  : ");
		scanf("%d",&emp2.salary);
		return emp2;
	}
	void displayEmp(struct employee emp2)
	{
		printf("\nEmployee ID is : %d",emp2.empId);
		printf("\nName of Employee is : %s",emp2.empName);
		printf("\nSalary of Employee : %d",emp2.salary);
	}
