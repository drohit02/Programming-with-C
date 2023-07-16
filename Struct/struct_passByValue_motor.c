//Assignment 28:Struct Pass by value

#include<stdio.h>
#include<string.h>

	struct motor
	{
		char name [20];
		char type [20];
		int rpm;
		int price;
	};
	struct motor storeMotor(struct motor);
	void displayMotor(struct motor);
	void main()
	{
		printf("Program :Struct Pass by Value\n");
		struct motor mt1;
		
		mt1 = storeMotor(mt1);
		      displayMotor(mt1);
	}
	struct motor storeMotor(struct motor mt2)
	{
		printf("\nEnter the Name of Motor :");
		gets(mt2.name);
		printf("\nEnter the type of the Motor :");
		gets(mt2.type);
		printf("\nEnter the rpm of Motor : ");
		scanf("%d",&mt2.rpm);
		printf("\nEnter the Price of Motor : ");
		scanf("%d",&mt2.price);
		return mt2;
	}
	void displayMotor(struct motor mt3)
	{
		printf("\nName of the Motor Is :%s",mt3.name);
		printf("\nType of Motor :%s",mt3.type);
		printf("\nRPM of Motor:%d",mt3.rpm);
		printf("\nPrice of Motor :%d",mt3.price);
	}

