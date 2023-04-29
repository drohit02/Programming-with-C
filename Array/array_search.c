//Array : Searching an value in array 

#include<stdio.h>
	void main()
	{
		int i,no,flag=0;
		int arr[6];
		
		printf("enter no to find in array : ");
		scanf("%d",&no);
		
		for(i=0;i<6;i++)
		{
			printf("Enter the array element value - %d : ",i);
			scanf("%d",&arr[i]);
		}
		printf("the elements in array are : ");
		
		for(i=0;i<6;i++)
		{
			printf("%d ",arr[i]);
		}
		for(i=0;i<6;i++)
		{
			if(arr[i]==no)
			{
				flag = 1;
				break;
			}
		}
		if(flag==1)
		{
			printf("\nnumber %d found in array at position %d",no,i+1);
		}
		else
		{
			printf("\nnumber %d not present in array",no);
		}
	}
