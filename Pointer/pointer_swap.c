//Pointer Program : Swapping of the the two number without usig third varible

#include<stdio.h>
	void swap(int*,int*);
	void main()
	{
		int a = 10 ;
		int b = 20 ;
		
		printf("Before Pointer : value of a  = %d and value of b = %d",a,b);
		
		swap(&a,&b);
		
		printf("\nAfter Pointer : value of a  = %d and value of b = %d",a,b);
	}
	void swap(int *x,int*y)
	{
		(*x) = (*x)+(*y);
		(*y) = (*x)-(*y);
		(*x) = (*x)-(*y);
	}
