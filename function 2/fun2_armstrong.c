#include<stdio.h>
	int arm();
	void main()
	{
		int result = arm();
		if(result==0)
		{
			printf(" and the number is armstrong");
		}
		else
		{
			printf(" and the number is not armstrong");	
		}
		
	}
	int arm()
	{
		int num;
		printf("Enter any 3-digit number : ");
		scanf("%d",&num);
		
		printf("The entered number is %d ",num);
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
