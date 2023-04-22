
#include <stdio.h>
#include <math.h>
   
  void arm();
  void main () {
  	
    	arm();
  }
  void arm () {
  	int num ,temp,rem,i,temp1;
 	
 	printf("Enter the limit for armstrong number range:");
 	scanf("%d",&num);
 	
 	temp1=num;
 	printf("The armstrong number between 1 and %d are:",num);
 	
 	for (i=1;i<=num;i++)
 	{
 		int sum = 0 ;
 		int count = 0 ;
 		
 		temp = i;
		 
		 while (temp>0)
		 {
		 	temp = temp/10;
		 	count++;
		  } 
		  temp = i ;
		  
		  while (temp>0)
		  {
		  	rem = temp%10;
		  	sum = sum + pow(rem,count);
		  	temp=temp/10;
		  	
		  }
		  if(sum==i)
		  {
		  	printf("%d ",i);
		  }
	 }
  }
