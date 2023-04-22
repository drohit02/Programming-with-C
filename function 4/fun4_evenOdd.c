//function type 4

#include<stdio.h>

 void main()
  {
 	int number;
 	
 	printf("Enter the number : ");
 	scanf("%d",&number);
 	
 	int num = evenOdd(number);
 	
 	if(num==0)
 	{
 		printf(" it is even number");
	 }
	 else
	 {
	 	printf(" it is odd number");
	 }
  } 
  int evenOdd(int num)
  {
  	if(num%2==0)
	  {	
	  	printf("the number is %d",num);
	  	return 0 ;
	  }
	  else
	  {
	  	printf("the number is %d",num);
	  	return 1 ;
	  }
  }
