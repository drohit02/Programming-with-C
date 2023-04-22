//function type 3

#include<stdio.h>
	void fibo(int);
	void main()
	{
		int number;
		printf("enter the range for the fibonacci series : ");
		scanf("%d",&number);
		
		fibo(number);
	}
	void fibo(int range)
	{
		int t1,t2,nxtTerm,i;
		t1 = 0 ; 
		t2 = 1 ;
		nxtTerm = t1 + t2 ;
		
		printf("the fibonacci series is %d,%d,",t1,t2);
		
		for(i=3;i<=range;i++)
		{
			printf("%d,",nxtTerm);
			t1 = t2 ; 
			t2 = nxtTerm ;
			nxtTerm = t1+t2;
		}
	}
