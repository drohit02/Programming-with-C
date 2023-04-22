//Fundction type 3

#include<stdio.h>
 void evenOdd(int);
 void main(){
 	int number;
 	
 	printf("enter any number: ");
 	scanf("%d",&number);
 	
 	evenOdd(number);
 }
 void evenOdd(int num){
 	
 	if(num%2==0)
 	{
 		printf("The number %d is even",num);
	 }
	 else
	 {
	 	printf("The number %d is odd",num);
	 }
 }
