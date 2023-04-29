//Assignment 20 : Array Passing to function:Function Type 4 : search value from an array elements

#include<stdio.h>
	int toSearch(int *,int,int);
	void main()
	{
		int i,search,arr[5];
		
		for(i=0;i<5;i++)
		{
			printf("enter the value at the element - %d : ",i);
			scanf("%d",&arr[i]);
		}
		
		printf("\nEnter the number to search for : ");
		scanf("%d",&search);
		
		int found = toSearch(arr,5,search);
		
		if(found==arr[i])
		{
			printf("\nthe number %d found in the array",arr[i]);
		}
		else
		{
			printf("\nthe number %d is not found in array",search);
		}
	}
	int toSearch(int *ptr,int size,int search)
	{
		int i,flag=0;
		
		printf("\nThe array values are : ");
		for(i=0;i<size;i++)
		{
			printf("%d ",ptr[i]);
		}
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
			return ptr[i];
		}
		else
		{
			return 0;
		}
	}

