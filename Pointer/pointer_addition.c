//Pointer Program : Sum of the addition


#include<stdio.h>
	int addition(int*,int*);
	void main()
	{
		int a = 10 ;
		int b = 20 ;
		int add ;
		
		add = addition(&a,&b);
		printf("addition of the number %d and %d is %d",a,b,add);
	}
	int addition(int *n1,int *n2)
	{
		int sum = (*n1)+(*n2);
		return sum ;
	}
