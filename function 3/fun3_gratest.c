//function type 3

#include<stdio.h>

 void greatest(int,int,int); 
 void main () {
 	
 	int a;
 	int b;
 	int c;
 	
 	printf("enter the number 1 :");
 	scanf("%d",&a);
 	
 	printf("enter the number 2 :");
 	scanf("%d",&b);
 	
 	printf("enter the number 3 :");
 	scanf("%d",&c);
 	
 	greatest(a,b,c);
	
 }
 void greatest(int no1,int no2,int no3)
 {
 	int max = no1>no2?(no1>no3?no1:no2):(no2>no3?no2:no3);
 	
 	if(max==no1)
 	{
 		printf("the number %d is greatest ",no1);
	 }
	 else if (max==no2)
	 {
	 	printf("the number %d is greatest ",no2);
	 }
	 else
	 {
	 	printf("the number %d is gretest",no3);
	 }
 }
