//function type 1

#include <stdio.h>
 void student();
 void main() {
 	student();
 }
 void student () {
 	
 	int price ;
 	int choice;
 	float discount,price_pay ;
 	printf("enter the price of the item :");
 	scanf("%d",&price);
 	
 	printf(" 1.yes\n 2.no\n");
 	printf("Are you a student (y/n) :");
 	scanf("%d",&choice);
 	
 	if(choice==1)
 	{
 		if(price>=500)
 		{
 			printf("You are a student and the purchased item price is %d\n",price);
 			printf("discount offer on item is 20%%\n");
 			
 			discount = 0.2*price;	 
		 }
		 else 
		 {
		 	printf("You are a student and the purchased item price is %d\n",price);
		 	printf("discount of on item is 10%%\n");
		 	
		 	discount = 0.1*price;
		 }
	 }
	 else if(choice==2)
	 {
	 	if(price>=600)
 		{
 			printf("You are not a student and the purchased item price is %d\n",price);
 			printf("discount offer on item is 15%%\n");
 			
 			discount = 0.15*price;	 
		 }
		 else 
		 {
		 	printf("You are not a student and the purchased item price is %d",price);
		 	printf("no discount on the item");
		 	
		 	discount = 0;
		 }
	 }
	 price_pay = price - discount ;
	 printf("the price of the item is : %d\n",price);
	 printf("the disount on the item : %.2f\n",discount);
	 printf("the price you have to pay : %.2f\n",price_pay); 
 }
