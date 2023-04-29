//Assignment 20 : Array Passing to function:Function Type 4 : Min and Max from an array

#include<stdio.h>
	int min(int *,int);
	int max(int *,int);
	void main()
	{
		int i,arr[5];
		
		for(i=0;i<5;i++)
		{
			printf("enter the value at element -%d : ",i);
			scanf("%d",&arr[i]);
		}
		printf("the array values are : ");
		for(i=0;i<5;i++)
		{
			printf("%d ",arr[i]);
	    }
			
			int mn = min(arr,5);
			printf("\nthe number %d is minimum from an array",mn);
			
			int mx = max(arr,5);
			printf("\nthe number %d is maximum from an array",mx);
	}
	int min(int *ptr,int size)
	{
		int i;
		
		int mn = ptr[0];
		
		for(i=0;i<size;i++)
		{
		
			if(ptr[i]<mn)
			{
				mn = ptr[i];
			}
		}
		return mn;	
	}
	int max(int *ptr,int size)
	{
		int i;
		
		int mx = ptr[0];
		
		for(i=0;i<size;i++)
		{
			if(ptr[i]>mx)
			{
				mx = ptr[i];
			}
		}
		return mx;
	}
