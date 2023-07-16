//Assignment 30:Struct Pass by Address and Arrow operator 

#include<stdio.h>

	struct HR
	{
		int HRid ;
		char name [20];
		double salary ;
		int allowance ;
	};
	
	void storeHR(struct HR*);
	void displayHR(struct HR*);
	
	void main()
	{
		struct HR hr ;
		
		storeHR(&hr);
		displayHR(&hr);
	}
	void storeHR(struct HR* ptr)
	{
		printf("function to store the HR\n");
		
		printf("HR Id is : ");
		scanf("%d",&ptr->HRid);
		
		fflush(stdin);
		printf("Enter the name of HR : ");
		gets(ptr->name);
		
		printf("Enter the salary of the HR : ");
		scanf("%ld",&ptr->salary);
		
		printf("Enter the allowance received by HR : ");
		scanf("%d",&ptr->allowance);
	}
	void displayHR(struct HR* ptr)
	{
		printf("\nfunction to display HR\n");
		
		printf("\nHR ID is : %d",ptr->HRid);
		printf("\nName of the HR : %s",ptr->name);
		printf("\nSalary of the HR : %ld",ptr->salary);
		printf("\nAllowance received by HR :%d",ptr->allowance);
	}
