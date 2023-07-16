//Assigment no 29 :Struct Book main() function :Pass by address;

#include<stdio.h>
struct book
{
	char bname [20];
	int bID;
	char author [20];
	int price;
}; 
void storeBook (struct book*,int);
void displayBook (struct book*,int);
void main()
{
	int n;
	printf("Enter the number of books want to store : ");
	scanf("%d",&n);
	
	struct book bk[n];
	
	storeBook(bk,n);
	displayBook(bk,n);
}
void storeBook(struct book* arr,int num)
{
	int i = 0 ;
	
	
	for(i=0;i<num;i++)
	{
		printf("\nEnter the name of book : ");
		scanf("%s",&arr[i].bname);
		fflush(stdin);
		printf("Enter the book id : ");
		scanf("%d",&arr[i].bID);
		printf("Enter the author's name : ");
		scanf("%s",&arr[i].author);
		fflush(stdin);
		printf("Enter the price of the book :");
		scanf("%d",&arr[i].price);
		printf("\n");
	}
	
}
void displayBook(struct book* arr,int num)
{
	int i = 0 ;
	int j= 1 ;
	for(i=0,j;i<=num,j<=num;i++ ,j++)
	{
		printf("************Record-%d***********",j);
		printf("\nThe name of the Book is : %s",arr[i].bname);
		printf("\nThe book ID is : %d",arr[i].bID);
		printf("\nThe author's name is : %s",arr[i].author);
		printf("\nThe price of the book is : %d",arr[i].price);
		printf("\n\n");
	}
}
