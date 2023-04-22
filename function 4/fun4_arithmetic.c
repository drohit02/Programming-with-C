//function type 4

#include<stdio.h>
    int addition(int,int);
    int substraction(int,int);
    int multipication(int,int);
    int division(int,int);
    int modulus(int,int);
	void main()
	{
		int number1,number2,choice;
		printf("Enter the number 1 : ");
		scanf("%d",&number1);
		
		printf("Enter the number 2 : ");
		scanf("%d",&number2);
		
		printf("Menu of the Operation\n");
		printf(" 1. Addition\n 2. Substraction\n 3. Multiplication\n 4. Division\n 5. Modulus\n\n");
		
		printf("Enter your choice : ");
		scanf("%d",&choice);
		
		
		if (choice==1)
		{
			int sum = addition(number1,number2);
			printf("\nthe addition of the number is %d",sum);
		}
		else if (choice==2)
		{
			int sub = substraction(number1,number2);
			printf("\nthe substraction of the number is %d",sub);
		}
		else if (choice==3)
		{
			int multi = multiplication(number1,number2);
			printf("\nthe multipliction of the number is %d",multi);
		}
		else if (choice==4)
		{
			int div = division(number1,number2);
			printf("\nthe division of the number is %d",div);
		}
		else if (choice==5)
		{
			int mod = modulus(number1,number2);
			printf("\nthe modulus of the number is %d",mod);
		}
		else
		{
			printf("You have entered wrong choice");	
		}
		
	}
	int addition(int n1,int n2)
	{
		printf("You have choose ADDITION operation");
		int sum = n1+n2;
		return sum;
	}
	int substraction(int n1,int n2)
	{	
		printf("You have choose SUBSTRACTION operation");
		int sub = n1-n2;
		return sub;
	}
	int multiplication(int n1,int n2)
	{
		printf("You have choose MULTIPLICATION operation");
		int multi = n1*n2;
		return multi;
	}
	int division(int n1,int n2)
	{
		printf("You have choose DIVISION operation");
		int div = n1/n2;
		return div;
	}
	int modulus(int n1,int n2)
	{
		printf("You have choose MODULUS operation");
		int mod = n1%n2;
		return mod;
	}
