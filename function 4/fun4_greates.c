//functio type 4

#include<stdio.h>

	void main()
	{
		int a,b,c;
		
		printf("enter the number 1 , number 2 , number 3  : ");
		scanf("%d %d %d",&a,&b,&c);
		
		int max = greatest(a,b,c);
		
		if(max==a)
		{
			printf("the numeber %d is greatest",a);
		}
		else if(max==b)
		{
			printf("the number %d greatest",b);
		}
		else
		{
			printf("the number %d greatest",c);	
		}
	}
	int greatest(int num1,int num2,int num3)
	{
		int max;
		max = num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
		
		if (max==num1)
		{
			return num1;
		}
		else if (max==num2)
		{
			return num2;
		}
		else
		{
			return num3;
		}
	}
