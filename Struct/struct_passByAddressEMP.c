//Assignment 30 :struct pass by address

#include <stdio.h>
struct employee
{
	int empID;
	char empName [20];
	double salary ;
};

void storeEmployee(struct employee*);
void displayEmployee(struct employee*);
void main()
{
	struct employee emp1 ;
	
	storeEmployee(&emp1);
	displayEmployee(&emp1);
}
void storeEmployee(struct employee* ptr)
{
	printf("funtion for storing the employee by pass by address\n");
	printf("Enter the employee ID : ");
	scanf("%d",&ptr->empID);
	fflush(stdin);
	printf("Enter the employee Name : ");
	gets(ptr->empName);
	printf("Enter the salary of employee : ");
	scanf("%ld",&ptr->salary);
}
void displayEmployee(struct employee* ptr)
{
	printf("\nfunction for the displaying the store employee\n");
	printf("\nEmployee ID is : %d ",ptr->empID);
	printf("\nEmployee name is : %s",ptr->empName);
	printf("\nSalary of employee is : %ld",ptr->salary);
}
