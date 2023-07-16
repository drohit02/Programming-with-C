//Assignment 30:Struct Pass by Address and Arrow operator 

#include <stdio.h>
struct student
{
	int stID;
	char stName [20];
	double marks ;
};

void storeStudent(struct student*);
void displayStudent(struct student*);
void main()
{
	struct student st ;
	
	storeStudent(&st);
	displayStudent(&st);
}
void storeStudent(struct student* ptr)
{
	printf("funtion for storing the student by pass by address\n");
	
	printf("Enter the student ID : ");
	scanf("%d",&ptr->stID);
	fflush(stdin);
	printf("Enter the student Name : ");
	gets(ptr->stName);
	printf("Enter the marks of student : ");
	scanf("%ld",&ptr->marks);
}
void displayStudent(struct student* ptr)
{
	printf("\nfunction for the displaying the store student\n");
	printf("\nStudent ID is : %d ",ptr->stID);
	printf("\nStudent name is : %s",ptr->stName);
	printf("\nMarks of Student is : %ld",ptr->marks);
}
