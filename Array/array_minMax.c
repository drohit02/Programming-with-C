//Array Program

#include <stdio.h>

	void main()
	{
		int i = 0;
		int arr[5];
		
		for(i=0;i<5;i++)
		{
			printf("enter the number : ");
			scanf("%d",&arr[i]);
		}
		
		printf("\n the array elements are : ");
		
		for(i=0;i<5;i++)
		{
			printf("%d,",arr[i]);
		}
		
		int min = arr[0];
		int max = arr[0];
		
		printf("\nthe maximum of array is : ");
		
		for(i=0;i<5;i++)
		{
			if(arr[i]>max)
			{
				max = arr[i];
			}
			
			if(arr[i]<min)
			{
				arr[i] = min;
			}
		}
		printf("%d",max);
		
		printf("\n the minimun of the array : ");
		
		printf("%d",min);
	}
