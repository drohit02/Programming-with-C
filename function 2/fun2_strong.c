#include<stdio.h>
	int strong();
	void main()
	{
		int result = strong();
		
		if(result==0)
		{
			printf(" the number is strong");
		}
		else
		{
			printf(" the number is not strong");
		}
		
	}
	int strong()
	{
		int num;
		printf("Enter the any number : ");
		scanf("%d",&num);
		
		printf("the entered number is %d",num);
		int fact,temp,i,sum=0,rem;
		temp = num;
		
		while(num>0)
		{
			fact = 1 ;
			i = 1 ;
			rem = num%10;
			
			while(i<=rem)
			{
				fact = fact*i;
				i++;
			}
			sum = sum + fact ;
			num = num / 10 ;
		}
		if(temp==sum)
		{
			return 0 ;
		}
		else
		{
			return 1 ;
		}
	}
