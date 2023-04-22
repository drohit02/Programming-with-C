//function type 1

#include<stdio.h>
  void digit();
 void main () {
   	digit();
}
 void digit () {
 	
 	int num ;
 	int a,b,c,d,sum=0;
 	
 	printf("Enter the 3-digit number : ");
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
    
