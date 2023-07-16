//Assignment 30:Struct Pass by Address and Arrow operator 

#include<stdio.h>

	struct date
	{
		int day;
		int month;
		int year;
	};
	void storeDate(struct date*);
	void displayDate(struct date*);
	
	void main()
	{
		struct date dt;
		
		storeDate(&dt);
		displayDate(&dt);
	}
	void storeDate(struct date* ptr)
	{
		printf("function to store the date\n");
		
		printf("Enter the day : ");
		scanf("%d",&ptr->day);
		
		printf("Enter the month : ");
		scanf("%d",&ptr->month);
		
		printf("Enter the year : ");
		scanf("%d",&ptr->year);
	}
	void displayDate(struct date* ptr)
	{
		printf("\nfunction to display date\n");
		
		printf("\nDate is : %d / %d / %d",ptr->day,ptr->month,ptr->year);
	}
