//Assignment 20 : Array Passing to function:Function Type 3 : Search an Element from the an Array

#include<stdio.h>
	void toSearch(int *,int,int);
	void main()
	{
		int i,search,arr[5];
		for(i=0;i<5;i++)
		{
			printf("enter the value at element - %d : ",i);
			scanf("%d",&arr[i]);
		}
		printf("the array elements are : ");
		for(i=0;i<5;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n\nEnter the element to find from the array : ");
		scanf("%d",&search);
		
		toSearch(arr,5,search);
	}
	void toSearch(int *ptr,int size,int search)
	{
		int i,flag=0;
		
		for(i=0;i<size;i++)
		{
			if(ptr[i]==search)
			{
				flag = 1;
				break;
			}
		}
		if(flag==1)
		{
			printf("\nnumber %d found at position %d",ptr[i],i+1);
		}
		else
		{
			printf("\nnumber %d is not found in array",search);
		}
	}
