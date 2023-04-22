//function type 1 

#include <stdio.h>
 void pattern();
 void main () {
 	
 	pattern();
 }
 
 void pattern () {
 	int i,j;
 	for (i=1;i<=5;i++)
 	{
 		for (j=1;j<=i;j++)
 		{ 
 			printf("%d ",j);
		 }
		printf("\n");
	 }
 }
