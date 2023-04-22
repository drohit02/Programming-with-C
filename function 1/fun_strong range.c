//function type 1 

#include <stdio.h>

 void strong_range();
 void main () {
 	strong_range();
 }
 void strong_range ()
 {
 	 int i, n, n1,sum=0,j,k,num2,num1;  
    int fact; 

     printf("Find Strong Numbers within an range of numbers:\n ");
  
    printf("Input starting range of number : ");  
    scanf("%d", &num1);
    printf("Input ending range of number: ");  
    scanf("%d", &num2); 
    printf("\nThe Strong numbers are :\n"); 

 for(k=num1;k<=num2;k++)
   {
     n1=k;
     sum=0;  
 
    for(j=k;j>0;j=j/10) 
    {  
  
        fact = 1;  
          for(i=1; i<=j % 10; i++)  
           {  
            fact = fact * i;  
           }  
            sum = sum + fact;  
    }  
    if(sum==n1)  
       
        printf("%d  ", n1); 
  } 
 }
