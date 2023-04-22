//function type 1

#include<stdio.h>
 void price();
 void main () {
 	price();
 }
 void price () {
 	
 	int price;
 	float discount,price_pay;
 	printf("enter the price of the item : ");
 	scanf("%d",&price);
 	
 	if(price<=500)
 	{
 		printf("the price is % hence applied discount is 10%%",price);
 		discount = 0.1*price;
	 }
	 else if (price>500 && price <=1500)
	 {
	 	printf("the price of item is %d hence applied discount is 15%%\n",price);
	 	discount = 0.15*price;
	 }
	 else if (price>1500 && price <=3000)
	 {
	 	printf("the price of the item is %d hence applied discount is 20%%\n",price);
	 	discount = 0.2*price;
	 }
	 else 
	 {
	 	printf("price of the item is %d hence applied discount is 25%%\n",price);
	 	discount = 0.25*price;
	 }
	 
	 price_pay = price-discount ;
	 
	 printf("atual price of the item is : %d \n",price);
	 printf("discount got on the price %d is %.2f\n",price,discount);
	 printf("the amount you have to pay is %.2f \n",price_pay);
 }
