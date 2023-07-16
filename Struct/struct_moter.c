//Assignment No 27: Struct

#include<stdio.h>
#include<string.h>

	struct motor
	{
		char name [20];
		char type [20];
		int rpm ;
		int price;	
	};
	void main()
	{
		printf("Program : Struct for Motor");
		
		struct motor mt1;
		
		strcpy(mt1.name,"KUKA");
		strcpy(mt1.type,"Servomotor");
		mt1.rpm = 9000;
		mt1.price = 32000;
		
		printf("\n\nName of Motor : %s",mt1.name);
		printf("\nType of Motor : %s",mt1.type);
		printf("\nRPM of Motor : %d",mt1.rpm);
		printf("\nPrice of Motor : %d\n",mt1.price);
		
		struct motor mt2 ;
		printf("\nEnter Name of Motor : ");
		gets(mt2.name);
		printf("Type of the Motor : ");
		gets(mt2.type);
		printf("Enter the RPM of Motor : ");
		scanf("%d",&mt2.rpm);
		printf("Enter the Price of Motor : ");
		scanf("%d",&mt2.price);
		
		printf("\n\nName of Motor : %s",mt2.name);
		printf("\nType of Motor : %s",mt2.type);
		printf("\nRPM of Motor : %d",mt2.rpm);
		printf("\nPrice of Motor : %d\n",mt2.price);
	
	}
