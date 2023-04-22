//function type 3

#include<stdio.h>
	void arm(int);
	void main()
	{
		int number;
		printf("Enter the 3-digit number : ");
		scanf("%d",&number);
		
		arm(number);
	}
	void arm(int num)
	{
		int rem,sum=0,temp;
		temp = num ;
		while(num>0)
		{
			rem = num%10;
			sum = sum+(rem*rem*rem);
			num = num/10;
		}
		if(temp==sum)
		{
			printf("the entered number %d is armstrong number",temp);
		}
		else
		{
			printf("the entered number %d is not armstrong number",temp);
		}
	}
