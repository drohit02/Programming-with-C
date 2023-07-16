//Assignment no 29 :Struct ::Array of struct varibable

#include<stdio.h>
#include<string.h>

	typedef struct student
	{
		int roll_no;
		char name [20];
		double marks;
	}student;
	void storeStudent(student*,int);
	void main()
	{
		int n;
		
		printf("enter the size of array struct : ");
		scanf("%d",&n);
		
		student s1[n];
		
		storeStudent(s1,n);
	}
	void storeStudent(student* arr,int size)
	{
		int i= 0 ;
		printf("\nArray of the Struct Variable\n\n");
		
		for(i=0;i<size;i++)
		{
			
			printf("Enter name of student at postion-%d:",i);
			scanf("%s",&arr[i].name); 
			printf("Enter the roll number of student at position-%d: ",i);
			scanf("%d",&arr[i].roll_no);
			printf("enter the marks of the student at position-%d :",i);
			scanf("%ld",&arr[i].marks);
			printf("\n");
		}
		for(i=0;i<size;i++)
		{
			printf("\nRoll no is:%d",arr[i].roll_no);
			printf("\nName of student:%s",arr[i].name);
			printf("\nMarks of student:%ld",arr[i].marks);
			printf("\n");
		}
	} 
