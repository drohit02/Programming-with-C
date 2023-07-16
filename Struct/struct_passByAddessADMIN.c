//Assignment 30 :Pass by Address and arrow operator

#include<stdio.h>

	struct admin
	{
		int adID ;
		char adName [20];
		int allowance ;
		double salary ;	
	};
	void storeAdmin(struct admin*);
	void displayAdmin(struct admin*);
	
	void main()
	{
		struct admin ad;
		
		storeAdmin(&ad);
		displayAdmin(&ad);
	}
	void storeAdmin(struct admin* ptr)
	{
		printf("function to store Admin in struct\n\n");
		
		printf("Enter the admin's ID : ");
		scanf("%d",&ptr->adID);
		
		fflush (stdin);
		printf("Enter the name of Admin : ");
		gets(ptr->adName);
		
		printf("Enter the allowance received by admin : ");
		scanf("%d",&ptr->allowance);
		
		printf("Enter the salary of admin : ");
		scanf("%ld",&ptr->salary);
	}
	void displayAdmin(struct admin* ptr)
	{
		printf("\nfunction to display stored Admin\n");
		
		printf("\nAdmin Id is : %d",ptr->adID);
		printf("\nName of the Admin : %s",ptr->adName);
		printf("\nAllowance received by Admin is : %d",ptr->allowance);
		printf("\nSalary of the Admin is : %ld",ptr->salary);
	}
