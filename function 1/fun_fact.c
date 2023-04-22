//Function type 1

#include<stdio.h>
 void main() {
    
     int firstnumber;
     int finalnumber;

     printf("please enter the final number : ");
     scanf("%d",&finalnumber);

     int i;
     
     for (firstnumber=1;firstnumber<=finalnumber;firstnumber++) 
	 {
         printf("the factorial of %d is : ",firstnumber);
          faintctorial=1;
          
         for (i=1;i<=firstnumber;i++) 
		 {
           factorial=factorial*i;
         }
         
	printf("%d \n ",factorial);
    }
    
}
