//Assignment 20 : Array Passing to function:Function Type 3 : Min and Max from An Array

#include<stdio.h>
	void minMax(int*,int);
	void main()
	{
		int i,arr[5];
		
		for(i=0;i<5;i++)\
		{
			printf("enter the value at element - %d : ",i);
			scanf("%d",&arr[i]);
		}
		printf("The Array elements are : ");
		for(i=0;i<5;i++)
		{
			printf("%d ",arr[i]);
		}
		minMax(arr,5);
	}
	void minMax(int *ptr,int size)
	{
		int i ;
		
		int max = ptr[0];
		int min = ptr[0];
		
		
		for(i=0;i<size;i++)
		{
			if(ptr[i]>max)
			{
				max = ptr[i];
			}
		}
		printf("\nMaximum of the array is %d ",max);
		
		for(i=0;i<size;i++)
		{
			if(ptr[i]<min)
			{
				min = ptr[i];
			}
		}
		printf("\nminimum of the array is %d ",min);
	}
