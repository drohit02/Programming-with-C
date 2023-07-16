//Assignment No 27 :Struct

#include<stdio.h>
#include<string.h>

	struct book
	{
		char name [20];
		char author [20];
		int year ;
		int price ;
	};
	void main()
	{
		printf("Program : Strct for Book");
		
		struct book bk1; 
		strcpy(bk1.name,"Secret");
		strcpy(bk1.author,"Rhonda Byrne");
		bk1.year = 2006 ;
		bk1.price = 250 ;
		
		printf("\n\nName of Book : %s",bk1.name);
		printf("\nAuthor of Book : %s",bk1.author);
		printf("\nYear of Publication : %d",bk1.year);
		printf("\nPrice of Book : %d",bk1.price);
		
		struct book bk2 ;
		printf("\n\nEnter the Name of Book :");
		gets(bk2.name);
		printf("\nEnter the Author of Book :");
		gets(bk2.author);
		printf("\nEnter the Year of Book publication :");
		scanf("%d",&bk2.year);
		printf("\nEnter the Price of Book :");
		scanf("%d",&bk2.price);
		
		
		printf("\n\nName of Book : %s",bk2.name);
		printf("\nAuthor of Book : %s",bk2.author);
		printf("\nYear of Publication : %d",bk2.year);
		printf("\nPrice of Book : %d",bk2.price);
	}  
