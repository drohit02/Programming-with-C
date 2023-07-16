//Assugnment 30 :struct pass by address and Arrow operator

#include<stdio.h>

	struct saleperson
	{
		int spID;
		char spName [20];
		double salary ;
		int incentive ;
		int target ;
	};
	void storeSalePerson(struct saleperson*);
	void displaySalePerson(struct saleperson*);
	void main() 
	{
		struct saleperson sp;
		
		storeSalePerson(&sp);
		displaySalePerson(&sp);
	}
	void storeSalePerson(struct saleperson* ptr)
	{
		printf("function to store employee\n");
		
		printf("\nEnter the Sale Person's ID : ");
		scanf("%d",&ptr->spID);
		
		fflush(stdin);
		printf("Enter the name of Sale Person : ");
		gets(ptr->spName);
		
		printf("Enter the salary of Sale Person : ");
		scanf("%ld",&ptr->salary);
		
		printf("Enter the incentive received by sale person : ");
		scanf("%d",&ptr->incentive);
		
		printf("Enter the target of the sale person : ");
		scanf("%d",&ptr->target);
		
	}void displaySalePerson(struct saleperson* ptr)
	{
		printf("\nfunction to display the store saleperson\n");
		
		printf("\nID of the Sale Person : %d",ptr->spID);
		printf("\nName of the Sale Person : %s",ptr->spName);
		printf("\nSalary of the sale person : %ld",ptr->salary);
		printf("\nIncentive received by sale person : %d",ptr->incentive);
		printf("\nTarget for the sale person : %d",ptr->target);
		
	}
