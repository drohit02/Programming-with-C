//Assignment 24 : Malloc program 

#include<stdio.h>

	void main()
	{
		int size,i ,search,found=0 ;
		
		printf("enter the size of array : ");
		scanf("%d",&size);
		
		int* arr;
		
		arr = (int*)malloc(sizeof(int)*size);
		
		for(i=0;i<size;i++)
		{
			printf("enter the value at element - %d : ",i);
			scanf("%d",&arr[i]);	
		}
		printf("\nthe value strored ing array are : ");
		for(i=0;i<size;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\nEnter the number to search in array : ");
		scanf("%d",&search);
		
		for(i=0;i<size;i++)
		{
			if(arr[i]==search)
			{
				found = 1;
				break;
			}
		}
		if(found==1)
		{
			printf("\nthe number %d is found at position %d",arr[i],i+1);
		}
		else
		{
			printf("\nthe number %d is not in array",search);
		}
	}
