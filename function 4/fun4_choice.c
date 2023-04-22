//function type 4

#include<stdio.h>
    int evenOdd(int);
    int digit(int);
	void main()
	{
		int choice,num,sum,num1,num2;
		printf("The Menu of the programs\n");
		printf(" 1. Even-Odd\n 2. Sum of Digit\n");
		
		printf("Enter your choice : ");
		scanf("%d",&choice);
		
		if(choice==1)
		{
			printf("enter the any number : ");
			scanf("%d",&num1);
			
			num  = evenOdd(num1);
			if(num==0)
			{
				printf(" it is even number");
			}
			else
			{
				printf(" it is odd number");
			}
		}
		else if(choice==2)
		{
			printf("Enter any 3-digit number : ");
			scanf("%d",&num2);
			
			sum = digit(num2);
			printf(" the sum of the digit of the number is %d",sum);
		}
		else
		{
			printf("You have entered wrong choice");	
		}
	}
	int evenOdd(int n1)
	{
		printf("the enterd number is %d",n1);
		if(n1%2==0)
		{
			printf("the entered number is %d",n1);
			return 0 ;
		}
		else
		{
			return 1 ;
		}
	}
	int digit(int n2)
	{
		int temp,sum=0,rem;
		temp = n2;
		
		while(n2>0)
		{
			rem  = n2%10;
			sum = sum + rem ; 
			n2 = n2/10 ;
		}
		printf("the entered number is %d",temp);
		return sum ;
	}
