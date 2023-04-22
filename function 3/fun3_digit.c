//funvtion type 3

#include <Stdio.h>
 void digit(int);
 void main(){
 	
 	int number;
 	printf("enter the 3-digit number : ");
 	scanf("%d",&number);
 	
 	digit(number);
 }
 void digit(int num)
 {
 	int temp, n,sum = 0,rem,rev = 0;
 	temp = num ;
 	int num2= num ;
 	while(num>0)
 	{
 		n = num%10;
 		sum = sum+n;
 		num = num/10;	
	 }
	 printf("The sum of number %d is %d\n",temp,sum);
	 
	 while(num2>0)
	 {
	 	rem = num2%10 ;
	 	rev = rev*10+rem;
	 	num2 = num2/10;
	 }
	 printf("The reverese of the number %d is %d",temp,rev);
 }
 

