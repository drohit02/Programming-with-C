//Function type 1 

#include <stdio.h>
 void addDigit(); 
 void main (){
 	addDigit();
 }
 void addDigit ()
 {
 	int num,first_digit,last_digit,sum=0 ;
 	
 	printf("enter the number :");
 	scanf("%d",&num);
 	
 	last_digit = num % 10 ; 
 	
 	while (num>=10)
 	{
 		num = num/10;
	 }
	 first_digit = num ;
 	
 	sum = first_digit + last_digit ;
 	
    printf("Sum of first and last digit = %d", sum);
 }
