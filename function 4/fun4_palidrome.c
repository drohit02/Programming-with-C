//function type 4

#include<stdio.h>
 	int palidrome(int);
	void main()
	{
		int number;
		printf("Enter the number : ");
		scanf("%d",&number);
		
		int result = palidrome(number);
		if(result==number)
		{
			printf("the entered number %d is palidrome",number);
		}
		else
		{
			printf("the entered number %d is not palidrome",number);
		}
	}
	int palidrome(int num)
	{
		int rem,rev=0;
		
		while(num>0)
		{
			rem = num%10;
			rev = rev*10+rem;
			num = num/10;
		}
		return rev;
	}
