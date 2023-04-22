//function type 3

#include<stdio.h>
#include<math.h>
 void arm(int);
 void main()
 {
 	int _range;
 	printf("enter the range of the armstrong number : ");
 	scanf("%d",&_range);
 	
 	arm(_range);
 }
 void arm(int range)
 {
 	int temp,rem,i,temp1;
 	
 	temp1=range;
 	printf("The armstrong number between 1 and %d are:",range);
 	
 	for (i=1;i<=range;i++)
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
