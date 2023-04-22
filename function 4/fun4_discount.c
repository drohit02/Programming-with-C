//functio type 4

#include<stdio.h>
    float discount(int);
	void main()
	{
		int _price;
		
		printf("Enter the price of the item : ");
		scanf("%d",&_price);
		
		float price_pay = discount(_price);
		printf(" the final price is to pay is %.2f",price_pay);
	}
	float discount(int price)
	{
		float price_pay;
		
		if(price<=500)
		{
			printf("price ot the item is less than 500,hence applied discount is 10%%");
			price_pay = price - (0.1*price);
		}
		else if(price>500 && price <=1500)
		{
			printf("price ot the item more than 500 and less than 1500,hence applied discount is 15%%");
			price_pay = price - (0.15*price);
		}
		else if(price>1500 && price<=3000)
		{
			printf("price ot the item is more than 1500 and less than 3000,hence applied discount is 20%%");
			price_pay = price - (0.2*price);
		}
		else
		{
			printf("price ot the item is more than 3000,hence applied discount is 22%%");
			price_pay = price - (0.22*price);
		}
		return price_pay;
	}
