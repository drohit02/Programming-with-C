#include<stdio.h >
    int add_first_last_digit();
	void main()
	{
		int sum = add_first_last_digit();
		printf("entered number the sum is %d",sum);
	}
	int add_first_last_digit()
	{
		int num,temp;
		printf("Enter the number : ");
		scanf("%d",&num);
		int first_digit,last_digit,sum;
		temp = num;
		last_digit = num%10;
		
		while(num>=10)
		{
			num = num/10;
		}
		first_digit = num;
		
		sum = first_digit+last_digit;
		printf("the entered number is %d ",temp);
		return sum;
	}
