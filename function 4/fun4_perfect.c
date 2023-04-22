//function type 4

#include<stdio.h>
	int perfect(int);
	void main()
	{
		int number;
		
		printf("Enter the any number : ");
		scanf("%d",&number);
		
		printf("Entered number is %d",number);
		int result = perfect(number);
		if(result==0)
		{
			printf(" the number is perfect");
		}
		else
		{
			printf(" the number is not perfect");
		}
	}
	int perfect(int num)
	{
		int sum = 0,i,temp;
		temp = num;
		
		for(i=1;i<num;i++)
		{
			if(num%i==0)
			{
				printf(" %d\t",i);
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
