//function type 3

#include<stdio.h>
 void strong(int);
 void main()
 { 
    int number; 
 	printf("Enter the any number  : ");
 	scanf("%d",&number);
 	
 	strong(number);
 }
 void strong(int num)
 {
 	int fact,i,rem;
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
