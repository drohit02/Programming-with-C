//pointer :Sum of the digit Program (Pass by address)

#include<stdio.h>
	void digit(int *);
	void main()
	{
		int number ;
		
		printf("Enter the 3-digit number : ");
		scanf("%d",&number);
		
		digit(&number);	
	}
	void digit(int *n)
	{
		int num, rem , temp , sum = 0;
		num = *n;
		temp = num;
		
		while(num>0)
		{
			rem = num%10;
			sum = sum+rem;
			num = num/10;
		}
		printf("the entered number is %d and the sum of the digit is %d",temp,sum);
	}
