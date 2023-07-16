//Assignment NO 28 :Struct program pass by value

#include<stdio.h>
#include<string.h>

	struct food
	{
		char name [20];
		char taste [20];
		int price;
	};
	struct food storeFood(struct food);
	void displayFood(struct food);
	void main()
	{
		printf("Program :Struct Pass by Value\n");
		struct food f1;
		
		f1 = storeFood(f1);
		      displayFood(f1);
	}
	struct food storeFood(struct food f2)
	{
		printf("\nEnter the Name of food :");
		gets(f2.name);
		printf("\nEnter the taste of the food :");
		gets(f2.taste);
		printf("\nEnter the Price of food : ");
		scanf("%d",&f2.price);
		return f2;
	}
	void displayFood(struct food f3)
	{
		printf("\nName of the food Is :%s",f3.name);
		printf("\nTaste of food :%s",f3.taste);
		printf("\nPrice of food :%d",f3.price);
	}
