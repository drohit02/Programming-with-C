//Assignment 27 : Struct

#include<stdio.h>
#include<string.h>

	struct sensor
	{
		char name [20]  ;
		char type [20] ;
		int range_in_cm;
		int price ;
	};
	void main()
	{
		printf("Program : Struct of Sensor\n");
		
		struct sensor s1;
		strcpy(s1.name,"PNP sensor");
		strcpy(s1.type,"inductive");
		s1.range_in_cm = 10;
		s1.price = 510 ;
		
		printf("\nName of sensor : %s",s1.name);
		printf("\nType of Sensor : %s",s1.type);
		printf("\nRange covered by sensor : %d",s1.range_in_cm);
		printf("\nPrice of sensor: %d\n",s1.price);
		
		struct sensor s2;
		printf("\nEnter the name of sensor : ");
		gets(s2.name);
		printf("Enter the type of sensor :");
		gets(s2.type);
		
		printf("Enter the range covered by sensor :");
		scanf("%d",&s2.range_in_cm);
		
		printf("Enter the price of the sensor : ");
		scanf("%d",&s2.price);
		
		printf("\nName of sensor : %s",s2.name);
		printf("\nType of Sensor : %s",s2.type);
		printf("\nRange covered by sensor : %d",s2.range_in_cm);
		printf("\nPrice of sensor: %d\n",s2.price);
	}
