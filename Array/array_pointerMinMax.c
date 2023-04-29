//Assignment 19 :pointer to array : Min and Max in array

#include<stdio.h>
	void main()
	{
		int i;
		
		int arr[5];
		int *ptr;
		
		ptr = arr;
		
		for(i=0;i<5;i++)
		{
			printf("enter the value at element - %d : ",i);
			scanf("%d",&ptr[i]);
		}
		
		printf("The entered value in array are : ");
		
		for(i=0;i<5;i++)
		{
			printf("%d ",ptr[i]);
		}
		int max = ptr[0];
		int min = ptr[0];
		
		for(i=0;i<5;i++)
		{
			if(ptr[i]>max)
			{
				max = ptr[i];
			}
		}
		printf("\nthe number %d in array is maximum",max);
		
		for(i=0;i<5;i++)
		{
			if(ptr[i]<min)
			{
				min = ptr[i];
			}
		}
		printf("\nthe number %d in array is minimum",min);
	}
