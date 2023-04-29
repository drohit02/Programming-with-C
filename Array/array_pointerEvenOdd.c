//Assignment 19 : pointer to array : Even-odd Program

#include<stdio.h>
	void main()
	{
		int i;
		int arr[5];
		int *ptr ;
		ptr = arr ;
		
		for(i=0;i<5;i++)
		{
			printf("Enter the value at element - %d : ",i);
			scanf("%d",&ptr[i]);
		}
		printf("\nthe elements in array are : ");
		for(i=0;i<5;i++)
		{
			printf("%d ",ptr[i]);
	    }
		printf("\nThe even numbers in array are : "); 
	    for(i=0;i<5;i++)
		{
			if(ptr[i]%2==0)
			{
				printf("%d ",ptr[i]);
			}
		}
		printf("\nThe odd numbers in array are : "); 
	    for(i=0;i<5;i++)
		{
			if(ptr[i]%2!=0)
			{
				printf("%d ",ptr[i]);
			}
		}
	}
