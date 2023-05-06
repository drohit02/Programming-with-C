//Assignment no 24 :  Malloc 

#include<stdio.h>
	void main()
	{
		int i,j,n,size,flag=0;
		printf("enter the size of array : ");
		scanf("%d",&size);
		
		int* ptr ;
		ptr = (int*)malloc(sizeof(int)*size);
		
		for(i=0;i<size;i++)
		{
			printf("enter the value at position-%d : ",i);
			scanf("%d",&ptr[i]);
		}
		printf("\nstored elemets  in array are : ");
		for(i=0;i<size;i++)
		{
			printf("%d ",ptr[i]);
		}
		printf("\nthe prime number in array are : ");
		for(i=0;i<size;i++)
		{
			flag = 0;
			for(j=2;j<ptr[i];j++)
			{
				if(ptr[i]%j==0)
				{
					flag = 1;
					break ;
				}
			}
			if(flag==0)
			{
				printf("%d ",ptr[i]);
			}
		}
	}
