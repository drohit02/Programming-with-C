//function type 1

#include <stdio.h>
  void fibo();
 void main () {
 	fibo();
 }
 
 void fibo(){
 	
 	int i;  //to check current number of term
 	int num ;  // required number of the term
 	
 	int t1 = 0 ; //starting of fibonacci series  is from 0
 	int t2 = 1 ; //starting of the fibonacci series is from 1
 	
 	int nxtTerm=t1+t2; //next term is always addition on previous two term
 	
 	printf("enter the number of term required:");
	scanf("%d",&num); // taking num of term required to print by user
	 
	printf("fibonacci series: %d,%d,",t1,t2);
	
	for(i=3;i<=num;i++) //i=3 because two term are already printed so current term will be i=3
	{
		printf("%d,",nxtTerm); //for every i until required term nxtTerm hold the value 
		t1 =  t2;
		t2 = nxtTerm;
		nxtTerm = t1+t2; 
	}
 }
