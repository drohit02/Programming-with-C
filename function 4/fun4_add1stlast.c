//function type 4


#include<stdio.h >
    int add_first_last_digit(int);
	void main()
	{
		int number;
		printf("Enter the number : ");
		scanf("%d",&number);
		
		int sum = add_first_last_digit(number);
		printf("entered number is %d and the sum is %d",number,sum);
	}
	int add_first_last_digit(int num)
	{
		int first_digit,last_digit,sum;
		
		last_digit = num%10;
		
		while(num>=10)
		{
			num = num/10;
		}
		first_digit = num;
		
		sum = first_digit+last_digit;
		return sum;
	}
