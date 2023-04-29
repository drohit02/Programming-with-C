//Assignment 19 : Pointer to array :Sum of the element

#include<stdio.h>
	void main()
	{
		int i,sum=0;
		
		int *ptr;
		int arr[5];
		
		ptr = arr ;
		
		for(i=0;i<5;i++)
		{
			printf("Enter the array element - %d : ",i);
			scanf("%d",&ptr[i]);
		}
		printf("\nArray element are store using pointer are : ");
		
		for(i=0;i<5;i++)
		{
			printf("%d ",ptr[i]);
			sum = sum+ptr[i];
		}
		printf("\nthe sum of the elements in array is : %d",sum);
		
		
	}
