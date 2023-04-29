//array to pointer : finding proof of Concept

#include<stdio.h>

	void main()
	{
		int i;
		int arr[6];
		int *ptr ;
		
		ptr = arr ;
		
		for(i=0;i<6;i++)
		{
			printf("enter the elements in array - %d : ",i);
			scanf("%d",&arr[i]);
		}
		printf("the elements in array : ");
		
		for(i=0;i<6;i++)
		{
			printf("%d ",arr[i]);
		}
		
		printf("\n\nBase address of the array is : %u",arr);
		printf("\nBase Pointer of array using Pointer : %u",ptr);		
		
		printf("\n\nWe can access array by using pointer ");
		
		printf("\nHere we are accessing the array using pointer : ");
		
		for(i=0;i<6;i++)
		{
			printf("%d ",*(ptr+i));
		}
		
		
		
	}
