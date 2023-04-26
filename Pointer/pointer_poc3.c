//pointer poc program 3 using function

#include<stdio.h>
 void myfun(int *);
 void main()
 {
 	int a = 10 ;
 	
 	printf("Before Pointer : value of a = %d\n",a);
 	
 	myfun(&a);
 	
 	printf("After Pointer : value of a = %d\n",a);
 	
 	
 }
 void myfun(int *b)
 {
 	*b = 40 ;
 }
