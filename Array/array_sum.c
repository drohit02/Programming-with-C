//array : Sum of the elements

#include<stdio.h>
	void main()
	{
		int i,sum = 0;
		
		int arr[5];
	
		for(i=0;i<5;i++)
		{
			printf("enter the element : ");
			scanf("%d",&arr[i]);
		}
		printf("Elements of arrays are : ");
		for(i=0;i<5;i++)
		{
			printf("%d,",arr[i]);
		}
		for(i=0;i<5;i++)
		{
			sum = sum + arr[i];
		}
		printf("\nthe sum of the element is : %d",sum);
	}
