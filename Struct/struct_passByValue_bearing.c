//Assignment 28 :Struct pass by value

#include<stdio.h>
#include<string.h>

	struct bearing
	{
		char name [20];
		char manufacturer [20];
		int series;
		int price;
	};
	struct bearing storeBearing(struct bearing);
	void displayBearing(struct bearing);
	void main()
	{
		printf("Program :Struct Pass by Value\n");
		struct bearing b1;
		
		b1 = storeBearing(b1);
		      displayBearing(b1);
	}
	struct bearing storeBearing(struct bearing b2)
	{
		printf("\nEnter the Name of bearing :");
		gets(b2.name);
		printf("\nEnter the manufacturer of the bearing :");
		gets(b2.manufacturer);
		printf("\nEnter the series of bearing : ");
		scanf("%d",&b2.series);
		printf("\nEnter the Price of bearing : ");
		scanf("%d",&b2.price);
		return b2;
	}
	void displayBearing(struct bearing b3)
	{
		printf("\nName of the bearing Is :%s",b3.name);
		printf("\nManufacturer of bearing :%s",b3.manufacturer);
		printf("\nSeries of bearing:%d",b3.series);
		printf("\nPrice of bearing :%d",b3.price);
	}
