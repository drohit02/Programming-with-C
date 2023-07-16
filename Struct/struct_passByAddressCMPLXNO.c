//Assignment 30:Struct Pass by Address and Arrow operator 

#include<stdio.h>

	struct cmplxNum
	{
		int real ;
		int imaginary ;
	};
	void storeComplexNum(struct cmplxNum*);
	void displayComplexNum(struct cmplxNum*);
	
	void main()
	{
		struct cmplxNum cm;
		
		storeComplexNum(&cm);
		displayComplexNum(&cm);
	}
	void storeComplexNum(struct cmplxNum* ptr)
	{
		printf("function to store complex number\n\n");
		
		printf("Enter the real part of complex number : ");
		scanf("%d",&ptr->real);
		
		printf("Enter the imaginary part of complex number : ");
		scanf("%d",&ptr->imaginary);
	}
	void displayComplexNum(struct cmplxNum* ptr)
	{
		printf("\n\nfunction to Display Complex Number\n\n");
		
		printf("Complex Number is : %d + %di",ptr->real,ptr->imaginary);
	}
