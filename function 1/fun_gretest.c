//function type 1

#include <stdio.h>
 void greatest();
 void main () 
 {
 	greatest();	
 }
 void greatest(){
 	
 	int num1;
 	int num2;
 	int num3;
 	  
 	   printf("Enter the num1 : ");
 	   scanf("%d",&num1);
 	   
 	   printf("Enter the num2 : ");
 	   scanf("%d",&num2);
 	   
 	   printf("Enter the num3 : ");
 	   scanf("%d",&num3);
 	   
 	if (num1>num2 && num1>num3)
 	{
 		printf("The number %d is greatest among %d,%d,%d",num1,num1,num2,num3);
	 }
	 
 	else if (num2>num3 && num2>num1)
 	{
 		printf("The number %d is greatest among %d,%d,%d",num2,num1,num2,num3);
	 }
	 
 	if (num3>num2 && num3>num1)
 	{
 		printf("The number %d is greatest among %d,%d,%d",num3,num1,num2,num3);
	 }
 	
 }
