//Assignment 19 : Array to Pointer : Prime numbers in array

#include<stdio.h>
	void main()
	{
		int i,j,n,no,flag,arr[5],*ptr;
		ptr = arr ;
		
		for(i=0;i<5;i++)
		{
			printf("enter the value at element - %d : ",i);
			scanf("%d",&ptr[i]);	
		} 
		printf("the values in the array are : ");
		for(i=0;i<5;i++)
		{
			printf("%d ",ptr[i]);
		}
		
		printf("\nthe prime numbers in array are : ");
		for(i=0;i<5;i++)
		{
			flag = 0 ;
			
			for(j=2;j<ptr[i];j++)
			{
				if(ptr[i]%j==0)
				{
					flag = 1 ;
					break ;
				}
			}
			if(flag==0)
			{
				printf("%d ",ptr[i]);	
			}	
		}
	}
