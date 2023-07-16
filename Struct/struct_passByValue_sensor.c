//Assignment 28 :Struct Pass By value

#include<stdio.h>
#include<string.h>

	struct sensor
	{
		char name [20];
		int range_cm;
		int price;
	};
	struct sensor storeSensor(struct sensor);
	void displaySensor(struct sensor);
	void main()
	{
		printf("Program :Struct with Pass By Value\n");
		struct sensor s1;
		
		s1 = storeSensor(s1);
		displaySensor(s1);
	}
	struct sensor storeSensor(struct sensor s2)
	{
		printf("Enter the Name of Sensor :");
		gets(s2.name);
		printf("Enter the range in cm of sensor :");
		scanf("%d",&s2.range_cm);
		printf("Enter the price of sensor :");
		scanf("%d",&s2.price);
		return s2 ;
	}
	void displaySensor(struct sensor s3)
	{
		printf("\nName of the sensor is :%s",s3.name);
		printf("\nRange of the Sensor in cm : %d",s3.range_cm);
		printf("\nPrice of Sensor : %d",s3.price);
	}
