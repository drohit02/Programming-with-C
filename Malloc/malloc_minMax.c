//Assignment No 24 : Malloc 

#include<stdio.h>
	void main()
	{
		int i,size;
	 	printf("enter the how many integer you want to store : ");
	 	scanf("%d",&size);
	 	
	 	int* ptr ;
	
		ptr =(int*)malloc(sizeof(int)*size);
	 	
	 	for(i=0;i<size;i++)
	 	{
	 		printf("enter the value at the element position-%d : ",i);
			scanf("%d",&ptr[i]);	
		}
		printf("\nThe array value store are : ");
		for(i=0;i<size;i++)
		{
			printf("%d ",ptr[i]);
		}
		int min = ptr[0];
		int max = ptr[0];
		
		for(i=0;i<size;i++)
		{
			if(ptr[i]>max)
			{
				max = ptr[i];
			}
		}
		printf("\nthe maximum in array is : %d",max);
		
		for(i=0;i<size;i++)
		{
			if(ptr[i]<max)
			{
				min = ptr[i];
			}
		}
		printf("\nthe maximum in array is : %d",min);
	}
