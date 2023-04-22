//function type 1

#include <stdio.h>

 void palidrome();
 void main(){
 	palidrome();
 }
 void palidrome(){
 	int num,temp,rem,sum=0;
 	
 	printf("Enter the number : ");
 	scanf("%d",&num);
 	
 	temp=num;
 	
 	while(num>0)
 	{
 		rem = num%10;
 		sum = (sum*10) + rem ;
		num = num/10; 
	 }
	 if (temp==sum)
	 {
	 	printf("%d is palidrome number",temp);
	 }
	 else 
	 {
	 	printf("%d is not palidrome number",temp);
	 }
	
 }
