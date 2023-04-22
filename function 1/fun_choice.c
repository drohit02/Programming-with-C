//function type 1

#include <stdio.h>
 void choice();
 void main() {
 	
 	choice();
 	
 }
 void choice () {
 	
 	int choice ;
 	printf("menu of the program is :\n\n");
 	printf(" 1. even odd\n 2. Total Salary\n 3. sum of digit\n\n");
 	
 	printf("enter your choice :");
 	scanf("%d",&choice);
 	
 	if (choice==1)
 	{
 		int num ;
 	    printf("\nEnter the any number : ");
 	    scanf("%d",&num);
 	
 	  if (num%2==0)
 	   {
 	     	printf("the number %d is even",num);
	   }   
	  else 
	   {
	    	printf("the number %d is odd",num);
	   } 
	 }
	 else  if (choice==2)
	 {
	 	int salary;
 	    float da,ta,hra,total_salary;
 	
 	    printf("\nenter the salry of the employee : ");
 	    scanf("%d",&salary);
 	
 	 if(salary<=5000)
 	 {
 		da = 0.1*salary;
 		ta = 0.2*salary;
 		hra = 0.25*salary;
	 }
	 else
	 {
 		da = 0.15*salary;
 		ta = 0.25*salary;
 		hra = 0.3*salary;
	 }
	 total_salary = da + ta + hra + salary ;
	 printf("the allowance on the basic salary %d are \n",salary);
	 printf("daily allowance is : %.2f\n",da);
	 printf("travelling allowance is : %.2f\n",ta);
	 printf("rent allowance is : %.2f\n",hra);
	 printf("total salary base on basic salary is : %.2f",total_salary);
	 }
	 else if (choice==3)
	 {
	 	int num ;
 	    int a,b,c,d,sum=0;
 	
      	printf("\nEnter the 3-digit number : ");
 	    scanf("%d",&num);
 	
 	    a=num%10;
     	b=num/10;
     	c=b%10;
 	    d=b/10;
 	
 	    sum = a+c+d;
 	
 	    printf("the sum of digit is %d of the number %d\n\n",sum,num);
 	    printf("reverse of the number %d is : ",num);
     	printf("%d",a);
 	    printf("%d",c);
 	    printf("%d",d);
	 }
	 else 
	 {
	 	printf("please enter proper choice");
	 }
	 
 }

