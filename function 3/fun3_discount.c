//function type 3

#include<stdio.h>
 void discount(int);
 void main() 
 {
 	int _price ;
 	printf("enter the price of the item : ");
 	scanf("%d",&_price);
 	
 	discount(_price);
 }
  void discount(int price)
  {
  	float dis,price_pay;
  	
  	if(price<=500)
  	{
  		printf("the price of the item is less than or equal to 500, hence applied discount is 10%%\n");
  		dis = 0.1*price;
	  }
	 else if(price>500 && price<=1500)
  	{
  		printf("the price of the item is between 500 and 1500, hence applied discount is 15%%\n");
  		dis = 0.15*price;
	  }
	else if(price>1500 && price<=3500)
  	{
  		printf("the price of the item is between 1500 and 3500, hence applied discount is 20%%\n");
  		dis = 0.2*price;
	  }
	  else
  	{
  		printf("the price of the item is more than 3500, hence applied discount is 22%%\n");
  		dis = 0.22*price;
	  }
	  
	  price_pay = price + dis ;
	  
	  printf("the discount got on the item is %.2f\n",dis);
	  printf("The final price of the item is to pay is %.2f\n",price_pay);
  }
