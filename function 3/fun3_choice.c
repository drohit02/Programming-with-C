//function type 3

#include<stdio.h>

	void evenOdd(int);
 	void digit(int); 
 	void main()
 {
	 	int choose ;
 		int number,number2;
 	
 		printf("Menu of the program\n");
 		printf("1. Even-Odd\n  2. Sum of digit\n");
 	
 		printf("Enter the your choice:");
 		scanf("%d",&choose);

 		if (choose==1)
 	 	{
	  		printf("enter the number:");
 	 		scanf("%d",&number);
 	  		evenOdd(number);	
	 	}
 		else if(choose==2)
	 	{
	 		printf("enter the number:");
 	 		scanf("%d",&number2);
 			digit(number2);
     	}
     	else
     	{
     		printf("You have entered the wrong choice");
	 	}
  }
	 	void evenOdd(int no)
	 	{
	 		if(no%2==0)
	 		{
	 			printf("the number %d is even",no);
			 }
		 	else
		 	{
		 		printf("The number %d is odd",no);
		 	}
	 	}
	 	void digit(int n)
	 	{
	 		int rem,sum=0,temp;
	 		temp=n;
	 		while(n>0)
	 		{
	 			rem = n%10 ;
	 			sum = sum+rem ;
	 			n = n/10 ;
		 	}	 
		 	printf("The sum of digit of the number %d is %d",temp,sum);
	 	}	
 
