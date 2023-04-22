//function type 4

#include<stdio.h>
	float student(int);
	float noStudent(int);
	void main()
	{
		int _price,choice;
		float price_pay;
		printf("Enter the price of the item : ");
		scanf("%d",&_price);
		
		printf("Are u student or not (1.Y/ 2.N) : ");
		scanf("%d",&choice);
		
		if(choice==1)
		{
			price_pay = student(_price); 
			printf("\nfinal price is to pay is %.2f",price_pay);
		}
		else if(choice==2)
		{
			price_pay = noStudent(_price);
			printf("\nfinal price is to pay is %.2f",price_pay);
		}
		else
		{
			printf("\nYou have entered wrong choice");
		}
	}
	float student(int price)
	{
		float price_pay;
		if(price<=500)
		{
			printf("You are a student and price of the item is less than 500,applied discount is 10%%");
			price_pay = price -(0.1*price);
		}
		else
		{
			printf("You are a student and price of the item is more than 500,applied discount is 20%%");
			price_pay = price -(0.2*price);
		}
		return price_pay;
	}
	float noStudent(int price)
	{
		float price_pay;
		if(price>600)
		{
			printf("You are a not student and price of the item is more than 600,applied discount is 10%%");
			price_pay = price -(0.1*price);
		}
		else
		{
			printf("You are a not student and price of the item is less than 600,no discount is applied");
			price_pay = price;
		}
		return price_pay;
	}
