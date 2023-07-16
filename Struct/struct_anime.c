//Assignment No 27:Struct

#include<stdio.h>
#include<string.h>

	struct anime
	{
		char name [20];
		char genre [20];
		int year;
		char origin[20];
	};
	void main() 
	{
		printf("Program :Struct for Anime\n");
		struct anime a1 ;
		strcpy(a1.name,"Naruto");
		strcpy(a1.genre,"Supernatural");
		a1.year = 1997 ;
		strcpy(a1.origin,"Japan");
		
		printf("\nName of Anime :%s",a1.name);
		printf("\nGenre of the Anime : %s",a1.genre);
		printf("\nRelease Year : %d",a1.year);
		printf("\nOrigin of Anime : %s",a1.origin);
		
		struct anime a2 ;
		
		printf("\n\nEnter the Name of Anime : ");
		gets(a2.name);
		
		printf("\nEnter the Genre of the Anime :");
		gets(a2.genre);
		
		printf("\nOrigin of Anime :");
		gets(a2.origin);
		
		printf("\nEnter the Release Year : ");
		scanf("%d",&a2.year);
		
	
		
		printf("\n\nName of Anime :%s",a2.name);
		printf("\nGenre of the Anime : %s",a2.genre);
		printf("\nRelease Year : %d",a2.year);
		printf("\nOrigin of Anime : %s",a2.origin);	
	}
