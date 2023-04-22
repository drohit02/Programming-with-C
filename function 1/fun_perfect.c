
#include <stdio.h>

 void perfect();
 void main () {
 	perfect();
 }
 
 void perfect() {
 	int num,i,sum=0;
 	
 	printf("enter the number : ");
 	scanf("%d",&num);
 	
 	for (i=1;i<num;i++)
 	{
 		if(num%i==0)
 		{
 			sum = sum+i;
		}
	 }
	 if (sum==num)
		 {
		 	printf("the number %d is a perfect number ",num);
		 }
		 else
		 {
		 	printf("the number %d is not a perfect number",num);
		 }
 }
 
