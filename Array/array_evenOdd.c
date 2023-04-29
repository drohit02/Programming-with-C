//array : Even odd 

#include<stdio.h>

	void main()
	{
	
		int i;
		int arr[5];
		
		for(i=0;i<5;i++)
		{
			printf("Enter the element : ");
			scanf("%d",&arr[i]);
		}
		printf("the element of the arrays are : ");
		
		for(i=0;i<5;i++)
		{
			printf("%d,",arr[i]);	
		}
		printf("\nthe even number in array : ");
		for(i=0;i<5;i++)
		{
			if(arr[i]%2==0)
			{
				printf("%d,",arr[i]);
			}
		}
		printf("\nthe odd number in array : ");
		
		for(i=0;i<5;i++)
		{
			if(arr[i]%2!=0)
			{
				printf("%d,",arr[i]);
			}
		}
	}	
