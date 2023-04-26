//pointer poc


#include<stdio.h>

 void main()
 {
 	int a = 10 ;
 	
 	printf("Value of the a before use of pointer is a = %d\n",a);

 	int *b ;
 	
 	b = &a ;
 	
 	*b = 30 ;
 	
 	printf("\nvalue of the pointer after the use of the is pointer a = %d",a);
 	
 }
