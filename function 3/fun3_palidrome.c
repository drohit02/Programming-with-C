//function type 3

#include<stdio.h>
 void palidrome(int);
 
 void main()
 {
    int number;
    
    printf("Enter any number : ");
    scanf("%d",&number);
    
    palidrome(number);
 }
 void palidrome(int num)
 {
 	int rem,rev=0,temp;
 	temp=num;
 	while(num>0)
 	{
 		rem = num%10;
 		rev = rev*10+rem;
 		num = num/10;
	 }
	 if(temp==rev)
	 {
	 	printf("the number %d is palidrome",temp);
	 }
	 else
	 {
	 	printf("the number %d is not palidrome",temp);
	 }
 }
