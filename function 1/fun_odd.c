//function even and odd 

#include <stdio.h>
 void even_odd();
 void main () {
 	
 	even_odd();
 } 
 void even_odd () {
 	
 	int num ;
 	printf("Enter the any number : ");
 	scanf("%d",&num);
 	
 	if (num%2==0)
 	{
 		printf("the number %d is even",num);
	 }
	 else 
	 {
	 	printf("the number %d is odd",num);
	 }
 }
