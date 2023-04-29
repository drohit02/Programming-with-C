//Assignment 20 : Array Passing to function:Function Type 3 : Sum of the Array elements

#include<stdio.h>
	void add(int * , int);
	void main()
	{
		int i,arr[5];
		
		for(i=0;i<5;i++)
		{
			printf("enter the value of the element - %d : ",i);
			scanf("%d",&arr[i]);
		}
		printf("The Array values are : ");
		for(i=0;i<5;i++)
		{
			printf("%d ",arr[i]);
		}
		add(arr,5);
	}
	void add(int *ptr,int size)
	{
		int i,sum=0;
		
		for(i=0;i<size;i++)
		{
		 	sum = sum + ptr[i];
		}
		printf("\nthe sum of the array elements are : %d ",sum);
	}
