// Function Type 1 

#include <stdio.h>
  
  void strong();
  void main () {
  	
  	strong();
  }
  void strong ()
  {
  	int num,i;
   int fact,rem;
   
   printf("Enter a number : ");
   scanf("%d",&num);
   
   int sum = 0;
   int temp = num; 
   
   while(num){
      i = 1,fact = 1;
      rem = num % 10;
      while(i <= rem){
         fact = fact * i;
         i++;
      }
      sum = sum + fact;
      num = num / 10;
   }
   if(sum == temp)
      printf("%d is a strong number",temp);
   else
      printf("%d is not a strong number",temp);
  }
