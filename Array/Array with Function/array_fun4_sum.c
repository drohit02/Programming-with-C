//Assignment 20 : Array Passing to function:Function Type 4 : sum of from an array elements

#include<stdio.h>
	int add(int *,int);
	void main()
	{
		int i,arr[5];
		
		for(i=0;i<5;i++)
		{
			printf("enter the value at element - %d : ",i);
			scanf("%d",&arr[i]);
		}
		int sum = add(arr,5);
		
		printf("\nthe sum of the array elements are : %d",sum);
	}
	int add(int *ptr,int size)
	{
		int i,sum=0;
		printf("the arrays value are : ");
		for(i=0;i<size;i++)
		{
			printf("%d ",ptr[i]);
		}
		for(i=0;i<size;i++)
		{
			sum = sum+ptr[i];
		}
		return sum;
	}

