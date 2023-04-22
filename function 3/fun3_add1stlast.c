//function type 3

#include<stdio.h>

	void add_first_last_digit(int);
	
	void main()
	{
		int number;
		printf("Enter any number : ");
		scanf("%d",&number);
		
		add_first_last_digit(number);
	}
	void add_first_last_digit(int num)
	{
		int first_digit,last_digit,sum=0;
		
		last_digit = num%10;
		
		while(num>=10)
		{
			num = num/10;
		}
		first_digit = num;
		
		sum = first_digit+last_digit;
		
		printf("the number %d and the sum of first and last digit of number is %d",num,sum);
	}
