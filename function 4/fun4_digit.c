//function type 4

#include<stdio.h>
 
 void main()
 {
 	int number ; 
 	 printf("Enter the any 3-digit number : ");
 	 scanf("%d",&number);
 	 
 	 int rev = digit(number);
 	 printf("the reverse number is %d",rev);
 }
 int digit(int num)
 {
 	int temp,no,rem,rev=0,sum=0;
 	temp = num;
 	no = num ;
 	
 	while(num>0)
 	{
 		rem = num % 10 ;
 		sum = sum + rem ;
 		num = num/10 ;
	 }
	 printf("The sum of the digit of %d is %d ",temp,sum);
	 
	 while(no>0)
	 {
	 	rem = no % 10;
	 	rev = rev*10+rem;
	 	no = no/10;
	 }
	 return rev;
 }
