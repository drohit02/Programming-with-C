//Assignment 30:Struct Pass by Address and Arrow operator 

#include<stdio.h>

	struct distance 
	{
		int feet ;
		int inches ;
	};
	void storeDistance(struct distance*);
	void displayDistance(struct distance*);
	
	void main()
	{
		struct distance dt;
		
		storeDistance(&dt);
		displayDistance(&dt);
	}
	void storeDistance(struct distance* ptr)
	{
		printf("Function to store the Distance\n\n");
		
		printf("Enter the feet : ");
		scanf("%d",&ptr->feet);
		printf("Enter the inches : ");
		scanf("%d",&ptr->inches);
	}
	void displayDistance(struct distance* ptr)
	{
		printf("\nFunction to display Distance\n\n");
		
		printf("The Distance is : %d feet %d inches",ptr->feet,ptr->inches);
	}
