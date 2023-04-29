//Assignment 20 : Array Passing to function:Function Type 3 : Even-Odd numbers in array

#include<stdio.h>
	void evenOdd(int *,int);
	void main()
	{
		int i,arr[5];
		
		for(i=0;i<5;i++)
		{
			printf("enter the value at element - %d : ",i);
			scanf("%d",&arr[i]);
		}
		printf("The Array values are : ");
		for(i=0;i<5;i++)
		{
			printf("%d ",arr[i]);
		}
		evenOdd(arr,5);
	}
	void evenOdd(int *ptr,int size)
	{
		int i;
		
		printf("\nthe even numbers are in array are : ");
		for(i=0;i<size;i++)
		{
			if(ptr[i]%2==0)
			{
				printf("%d ",ptr[i]);
			}
		}
		printf("\nthe odd numbers are in array are : ");
		for(i=0;i<size;i++)
		{
			if(ptr[i]%2!=0)
			{
				printf("%d ",ptr[i]);
			}
		}
	}
