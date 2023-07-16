//Assignment No 27 :Struct

#include<string.h>
#include<stdio.h>

	struct food
	{
		char name [20];
		char taste [20];
		float protein ;
		int price ;
	};
	void main()
	{
		printf("Program : Struct for Food\n");
		
		struct food f1;
		strcpy(f1.name,"Corn Pizza");
		strcpy(f1.taste,"Sweet");
		f1.protein = 16.6;
		f1.price = 209 ;
		
		printf("\n\nName of the food : %s",f1.name);
		printf("\nTaste of food : %s",f1.taste);
		printf("\nProtein in food(gm) : %.1f",f1.protein);
		printf("\nPrice of the food : %d",f1.price);
		
		struct food f2 ;
		printf("\n\nEnter the name of food : ");
		gets(f2.name);
		printf("\nEnter the Taste of the food : ");
		gets(f2.taste);
		printf("\nEneter the protein contain in Food :");
		scanf("%f",&f2.protein);
		printf("\nEnter the price of the item :");
		scanf("%d",&f2.price);
		
		printf("\n\nName of the Pizza : %s",f2.name);
		printf("\nTaste of Pizza : %s",f2.taste);
		printf("\nProtein in Pizza(gm) : %.1f",f2.protein);
		printf("\nPrice of the pizza : %d",f2.price);
		
	}
