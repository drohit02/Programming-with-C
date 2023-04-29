//Assignment 20 : Array Passing to function:Function Type 4 : Even and Odd Number from an array

#include<stdio.h>
	int even_no(int *,int);
	int odd_no(int *,int);
	void main()
	{
		int i,arr[5];
		
		for(i=0;i<5;i++)
		{
			printf("enter the value at the element - %d : ",i);
			scanf("%d",&arr[i]);
		}
		even_no(arr,5);
		
		odd_no(arr,5);	
	}
	int even_no(int *ptr,int size)
	{
		int i;
		printf("\nThe Array values are : ");
		for(i=0;i<size;i++)
		{
			printf("%d ",ptr[i]);
		}
		
		printf("\nthe even numbers in array are : ");
		
		for(i=0;i<size;i++)
		{
			if(ptr[i]%2==0)
			{
				printf("%d ",ptr[i]);
			}
		}
		return 0;
	}
	
	int odd_no(int *ptr,int size)
	{
		int i;
		printf("\nThe Array values are : ");
		
		for(i=0;i<size;i++)
		{
			printf("%d ",ptr[i]);
		}
		
		printf("\nthe odd numbers in array are : ");
		
		for(i=0;i<size;i++)
		{
			if(ptr[i]%2!=0)
			{
				printf("%d ",ptr[i]);
			}
		}
		return 0;
	}
