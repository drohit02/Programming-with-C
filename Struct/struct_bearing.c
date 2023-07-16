//Assignment No 27:Struct

#include<stdio.h>
#include<string.h>

	struct bearing
	{
		char name [30];
		char company [20];
		int series;
		int price;
	};
	
	void main()
	{
		printf("Program : Struct for Bearing\n\n");
		
		struct bearing b1 ;
		strcpy(b1.name,"Ball Bearing");
		strcpy(b1.company,"Schaeffler ");
		b1.series = 6210;
		b1.price = 545;
		
		printf("\nName of Bearing : %s",b1.name);
		printf("\nName of Manufacturer : %s",b1.company);
		printf("\nSeries of the Bearing : %d",b1.series);
		printf("\nPrice of the Bearing : %d\n",b1.price);
		
		struct bearing b2 ;
		printf("\nEnter the name of Bearing : ");
		gets(b2.name);
		printf("\nName of Manufacturer : ");
		gets(b2.company);
		printf("\nSeries of Bearing : ");
		scanf("%d",&b2.series);
		printf("\nPrice pf the Bearing : ");
		scanf("%d",&b2.price);
		
		printf("\nName of Bearing : %s",b2.name);
		printf("\nName of Manufacturer : %s",b2.company);
		printf("\nSeries of the Bearing : %d",b2.series);
		printf("\nPrice of the Bearing : %d",b2.price);
		
	}
