//function type 1

#include <stdio.h>

 void all_operation();
 void main() {
 	
 	all_operation();
 }
 
 void all_operation () {
 	int num1;
 	int num2;
 	int ch ;
 	
 	printf("enter the num1 : ");
 	scanf("%d",&num1);
 	
 	printf("enter the num2 : ");
 	scanf("%d",&num2);
 	
 	printf("\n\n");
 	
 	printf(" 1. Addition\n 2. Substraction\n 3. Multiplication\n 4. Division\n 5. Modulus\n");
 	
 	printf("\n\n");
 	
 	printf("enter the character of your choice : ");
 	scanf("%d",&ch);
 	
 	if (ch== 1)
 	{
 		int add = num1+num2;
 		printf("addition of the number is : %d",add);
	 }
	 else if (ch==2)
	 {
	 	int sub = num1-num2;
	 	printf("substarction of the number is : %d",sub);
	 }
	 else if (ch==3)
	 {
	 	int multi = num1*num2;
	 	printf("multiplication of the number is : %d",multi);
	 }
 	else if (ch==4)
 	{
 		int div = num1/num2;
 		printf("the division of the number is : %d",div);
	 }
	 else if (ch==5)
	 {
	 	int mod = num1%num2;
	 	printf("the mod of number is : %d",mod);
	 }
	 else 
	 {
	 	printf("please enter valid instrution");
	 }
 }
