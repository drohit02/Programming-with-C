//array program

#include<stdio.h>
	void main()
	{
		int i;
		
		int arr[5] = {10,22,45,32,56};  //Here array is initialized (case-1 : initialized value = size of array)
		int arr1[5] = {11,23}; // Array is initailized (case-2 : initialzed value < size of array)
		int arr2[5] = {90,98,78,56,77,65}; //array is intilized (case-3 : initialized value>size of array (Not recommened)
		
		printf("\n(Case-1)the initialized value in array are : ");
		for(i=0;i<5;i++)
		{
			printf("%d ",arr[i]);
		}
		
		printf("\n(Case-2)the initialized value in array are : ");
		for(i=0;i<5;i++)
		{
			printf("%d ",arr1[i]);
		}
		
		printf("\n(Case-3)the initialized value in array are : "); //warning while compliation
		for(i=0;i<5;i++)
		{
			printf("%d ",arr2[i]);
		}
		
	}
