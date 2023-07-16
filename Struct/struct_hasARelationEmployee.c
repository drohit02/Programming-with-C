//Assignment 31:Struct::Has a relationship

#include<stdio.h>
#include<String.h>

	typedef struct Birth
	{
		int day;
		int month;
		int year;
	}Birth;
	typedef struct Joining
	{
		int day ;
		int month ;
		int year ;
	}Joining;
	typedef struct Leaving
	{
		int day ;
		int month ;
		int year ;
	}Leaving;
		struct employee
	{
		int empID;
		char empName [20];
		Birth dob ;
		Joining doj ;
		Leaving dol;
	};
	
	void main()
	{
		struct employee emp1 ;
		
		printf("Struct :Employee 1\n\n");
		
		emp1.empID = 101 ;
		strcpy(emp1.empName,"Sachin");
		emp1.dob.day = 22 ;
		emp1.dob.month = 4 ;
		emp1.dob.year = 1999 ;
		emp1.doj.day = 27 ;
		emp1.doj.month = 9 ;
		emp1.doj.year = 2022 ;
		emp1.dol.day = 0 ;
		emp1.dol.month = 0 ;
		emp1.dol.year = 0 ;
		
		printf("Employee ID is : %d",emp1.empID);
		printf("\nEmployee Name is : %s",emp1.empName);
		printf("\nEmployee's Date of Birth is : %d/%d/%d",emp1.dob.day,emp1.dob.month,emp1.dob.year);
		printf("\nEmployee's Date of Joing is : %d/%d/%d",emp1.doj.day,emp1.doj.month,emp1.doj.year);
		printf("\nEmployee's Date of Leaving is : %d/%d/%d",emp1.dol.day,emp1.dol.month,emp1.dol.year);
		
		struct employee emp2 ;
		printf("\n\nStruct : Employee 2\n\n");
		
		printf("Enter the Employee ID : ");
		scanf("%d",&emp2.empID);
		fflush(stdin);
		printf("Enter the name of student : ");
		gets(emp2.empName);
		printf("Enter the Employees's Date of Birth : ");
		scanf("%d %d %d",&emp2.dob.day,&emp2.dob.month,&emp2.dob.year);
		printf("Enter the Employees's Date of Joining : ");
		scanf("%d %d %d",&emp2.doj.day,&emp2.doj.month,&emp2.doj.year);
		printf("Enter the Employees's Date of Leaving : ");
		scanf("%d %d %d",&emp2.dol.day,&emp2.dol.month,&emp2.dol.year);
		
		printf("\nEmployee ID is : %d",emp2.empID);
		printf("\nEmployee Name is : %s",emp2.empName);
		printf("\nEmployee's Date of Birth is : %d/%d/%d",emp2.dob.day,emp2.dob.month,emp2.dob.year);
		printf("\nEmployee's Date of Joing is : %d/%d/%d",emp2.doj.day,emp2.doj.month,emp2.doj.year);
		printf("\nEmployee's Date of Leaving is : %d/%d/%d",emp2.dol.day,emp2.dol.month,emp2.dol.year);	
	}
