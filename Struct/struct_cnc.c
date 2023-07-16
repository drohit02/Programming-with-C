//Assignment No 27: struct

#include<stdio.h>
#include<string.h>

	struct cnc
	{
		char name [20];
		char manufacturer [20];
		char type [15];
		int price_cr;
	};
	void main()
	{
		printf("Program : Struct for CNC");
		struct cnc cn1 ;
		strcpy(cn1.name,"SHW 9000");
		strcpy(cn1.manufacturer,"SHW GmbH");
		strcpy(cn1.type,"HMC,SPM");
		cn1.price_cr = 110;
		
		printf("\n\nName of the CNC Machine : %s",cn1.name);
		printf("\nName of te Manufacturer : %s",cn1.manufacturer);
		printf("\nType of CNC Machine : %s",cn1.type);
		printf("\nPrice of CNC machine In Crore  :%d",cn1.price_cr);
		
		struct cnc cn2 ;
		printf("\n\nEnter the name Of the CNC : ");
		gets(cn2.name);
		printf("\nEnter the name Of the Manufacturer : ");
		gets(cn2.manufacturer);
		printf("\nEnter the Type Of the CNC : ");
		gets(cn2.type);
		printf("\nEnter the Price Of the CNC in Crore : ");
		scanf("%d",&cn2.price_cr);
		
		printf("\n\nName of the CNC Machine : %s",cn2.name);
		printf("\nName of te Manufacturer : %s",cn2.manufacturer);
		printf("\nType of CNC Machine : %s",cn2.type);
		printf("\nPrice of CNC machine In Crore  :%d",cn2.price_cr);
	}
