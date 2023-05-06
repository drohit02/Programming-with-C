//Assignment 24 :Malloc 

#include<stdio.h>
	void main()
	{
		int i,size,sum=0;
		
		printf("enter the size of elemen tto store : ");
		scanf("%d",&size);
		
		int* ptr;
		ptr = (int*)malloc(sizeof(int)*size);
		
		for(i=0;i<size;i++)
		{
			printf("enter the value at position-%d : ",i);
			scanf("%d",&ptr[i]);
		}
		printf("\nthe array values are : ");
		for(i=0;i<size;i++)
		{
			printf("%d ",ptr[i]);
		}
		for(i=0;i<size;i++)
		{
			sum = sum+ptr[i];
		}
		printf("\nthe sum of the array element is : %d",sum);
	}
