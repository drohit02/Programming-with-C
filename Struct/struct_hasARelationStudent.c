//Assignment 31:Struct::Has a relationship

#include <stdio.h>
#include<string.h>

	struct date
	{
		int day ;
		int month ;
		int year ;	
	};
	struct student
	{
		int roll_no ;
		char name [20] ;
		struct date Dob ;
	};
	void main()
	{
		struct student st1 ;
		
		st1.roll_no = 10 ;
		strcpy(st1.name,"Sachin");
		st1.Dob.day = 27 ; 
		st1.Dob.month = 3 ;
		st1.Dob.year = 1997 ;
		
		printf("Roll No of student is : %d",st1.roll_no);
		printf("\nName of the Student : %s",st1.name);
		printf("\nDate of Birth is : %d/%d/%d",st1.Dob.day,st1.Dob.month,st1.Dob.year);
		
		struct student st2 ;
		
		printf("\n\nEnter the roll no : ");
		scanf("%d",&st2.roll_no);
		printf("Enter the name of student : ");
		fflush(stdin);
		gets(st2.name);
		printf("Enter the Date of Birth of Student : ");
		scanf("%d %d %d",&st2.Dob.day,&st2.Dob.month,&st2.Dob.year);
			
		
		printf("Roll No of student is : %d",st2.roll_no);
		printf("\nName of the Student : %s",st2.name);
		printf("\nDate of Birth is : %d/%d/%d",st2.Dob.day,st2.Dob.month,st2.Dob.year);
		
	}
