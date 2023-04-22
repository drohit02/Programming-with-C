//function type 4

#include<stdio.h>
	int arm(int);
	void main()
	{
		int number;
		printf("Enter any 3-digit number : ");
		scanf("%d",&number);
		
		printf("The entered number is %d ",number);
		int result = arm(number);
		if(result==0)
		{
			printf(" and the number is armstrong");
		}
		else
		{
			printf(" and the number is not armstrong");	
		}
		
	}
	int arm(int num)
	{
		int temp,sum=0,rem;
		temp = num ;
		while(num>0)
		{
			rem = num%10;
			sum = sum+(rem*rem*rem);
			num = num/10;
		}
		if(temp==sum)
		{
			return 0;
		}
		else
		{
			return 1 ;
		}
	}
