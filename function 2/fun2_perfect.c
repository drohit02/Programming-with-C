#include<stdio.h>
	int perfect();
	void main()
	{
		int result = perfect();
		if(result==0)
		{
			printf(" the number is perfect");
		}
		else
		{
			printf(" the number is not perfect");
		}
	}
	int perfect()
	{
		int num;
		
		printf("Enter the any number : ");
		scanf("%d",&num);
		
		printf("Entered number is %d",num);
		int sum = 0,i,temp;
		temp = num;
		
		for(i=1;i<num;i++)
		{
			if(num%i==0)
			{
				sum = sum+i;
			}
		}
		if(temp==sum)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
