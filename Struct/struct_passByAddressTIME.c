//Assignment 30:Struct Pass by Address and Arrow operator 

#include<stdio.h>

	struct time
	{
		int hh ;
		int mm ;
		int ss ;
	};
	
	void storeTime(struct time*);
	void displayTime(struct time*);
	
	void main()
	{
		struct time tm;
		
		storeTime(&tm);
		displayTime(&tm);
	}
	void storeTime(struct time* ptr)
	{
		printf("\nfunction to store time \n\n");
		
		printf("Enter the clock hour : ");
		scanf("%d",&ptr->hh);
		printf("Enter the clock minute : ");
		scanf("%d",&ptr->mm);
		printf("Enter the clock sec : ");
		scanf("%d",&ptr->ss);	
	}
	void displayTime(struct time* ptr)
	{
		printf("function to display time \n\n");
		
		printf("The time is(HH:MM:SS) : %d:%d:%d",ptr->hh,ptr->mm,ptr->ss);
    } 
