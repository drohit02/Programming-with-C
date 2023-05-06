//Assignment 24 : Malloc

#include<stdio.h>
	void main()
	{
		int i,size;
		
		printf("enter the data store into array : ");
		scanf("%d",&size);
		
		int* ptr;
		ptr = (int*)malloc(sizeof(int)*size);
		for(i=0;i<size;i++)
		{
			printf("enter te value at the position-%d : ",i);
			scanf("%d",&ptr[i]);
		}
		printf("\nthe element stored in array are : ");
		for(i=0;i<size;i++)
		{
			printf ("%d ",ptr[i]);
		}
		printf("\nthe even numbers in array are : ");
		for(i=0;i<size;i++)
		{
			if(ptr[i]%2==0)
			{
				printf("%d ",ptr[i]);
			}
		}
		printf("\nthe odd numbers in array are : ");
		for(i=0;i<size;i++)
		{
			if(ptr[i]%2!=0)
			{
				printf("%d ",ptr[i]);
			}
		}
	}
