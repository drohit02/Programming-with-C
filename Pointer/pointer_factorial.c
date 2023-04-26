//pointer program : Factorial Progrm

#include<stdio.h>
	void fact(int *);
	void main()
	{
		int number ;
		
		printf("enter any number for its Factorial : ");
		scanf("%d",&number);
		
		fact(&number);
	}
	void fact(int *num)
	{
		int temp , factorail=1;
		temp = *num;
		while(*num>=1)
		{
			factorail = factorail * (*num);
			(*num)--;
		}
		printf("the number is %d and the factorail is %d",temp,factorail);
	}
