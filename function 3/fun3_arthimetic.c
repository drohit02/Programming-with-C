//function type 3

 #include <stdio.h>
  void arithemetic(int,int);
  void main() {
  	
  	int a ;
  	int b ;
  	
  	printf("enter the number 1 :");
  	scanf("%d",&a);
  	
  	
  	printf("enter the number 2 :");
  	scanf("%d",&b);
  	
  	arithemetic(a,b);
  }
  void arithemetic(int num1,int num2)
  {
  	printf("Menu fot the arithemtic operation\n");
  	printf("1. Addidtion\n 2. Substraction\n 3. Multiplication\n 4. Division\n 5. Modulus\n");
	int oper;
	
	printf("Enter the operation of your choice");
	scanf("%d",&oper);
	
	if(oper == 1)
	{
		printf("The operation choosen is ADDITION\n");
		int add = num1+num2;
		printf("the sum of the num1 and num2 is %d \n",add);
	}
	else if(oper == 2)
	{
		printf("The operation choosen is SUBSTRACTION\n");
		int sub = num1-num2;
		printf("the substraction of the num1 and num2 is %d \n",sub);
	}
	else if(oper == 3)
	{
		printf("The operation choosen is MULTIPLICTION\n");
		int multi = num1*num2;
		printf("the multiplication of the num1 and num2 is %d \n",multi);
	}
	else if(oper ==4)
	{
		printf("The operation choosen is DIVISION\n");
		int div = num1/num2;
		printf("the division of the num1 and num2 is %d \n",div);
	}
	else if(oper == 5)
	{
		printf("The operation choosen is MODULUS\n");
		int mod = num1%num2;
		printf("the modulus of the num1 and num2 is %d \n",mod);
	}
  	else
  	{
  		printf("You have choose wrong operation");
	  }
  }
