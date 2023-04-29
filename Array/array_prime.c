//array :Prime numbers in array

#include <stdio.h>
	void main()
	{
		int i,j,n,no,flag;
		int arr[6];
		int prime[6];
		
		for(i=0;i<6;i++)
		{
			printf("enter the array element - %d : ",i);
			scanf("%d",&arr[i]);
		}
		printf("The elements in array are : ");
		
		for(i=0;i<6;i++)
		{
			printf("%d ",arr[i]);
		}
	
		printf("\nthe prime number in array is  : ");
		for(i=0;i<6;i++)
		{
			flag = 0 ;
			no = arr[i];
			
			
			for(j=2;j<no;j++)
			{
				if(no%j==0)
				{
					flag = 1 ;
					break;
				}
			}
			if(flag==0)
			{
				printf("%d ",arr[i]);
			}
       	}
	
	}
