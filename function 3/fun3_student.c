//function type 3

#include<stdio.h>
	void student(int);
	void noStudent(int);
	void main()
	{
		int _price;
		int isStudent;
		printf("Enter the price of the item : ");
		scanf("%d",&_price);
		
		printf("Are u student(1. Y/2. N) : ");
		scanf("%d",&isStudent);
		
		if(isStudent==1)
		{
			student(_price);
		}
		else if(isStudent==2)
		{
			noStudent(_price);
		}
		else
		{
			printf("You have entered the wrong input");
		}
	}
	void student(int price)
	{
		int price_pay;
		if(price>500)
		{
			printf("You are a student and the item purchase value is more than 500 then appied discount is 20%%\n");
			price_pay = price-(0.2*price); 
		}
		else
		{
			printf("You are a student and the item purchase value is less than 500 then appied discount is 10%%\n");
			price_pay = price-(0.1*price); 
		}
		printf("The final price is to pay is %d",price_pay);
	}
	void noStudent(int price)
	{
		int price_pay;
		if(price>600)
		{
			printf("You are not a student and the item purchase value is more than 600 then appied discount is 15%%\n");
			price_pay = price-(0.15*price); 
		}
		else
		{
			printf("You are not a student and the item purchase value is less than 600 then no discount for you\n");
			price_pay = price ;
		}
		printf("The final price is to pay is %d",price_pay);
	}
