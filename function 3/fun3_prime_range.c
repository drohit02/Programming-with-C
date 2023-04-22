//finction type 3

#include<stdio.h>
  void prime(int);
  void main()
  {
  	int range;
	  
	  printf("enter the range for the prime number : ");
	  scanf("%d",&range);
	  
	  prime(range);	
  }
  void prime(int num)
  {
  	int i, j;
    for (i = 2; i <= num; i++)
	 {
        int isPrime = 1;
    	    for (j = 2; j <= i / 2; j++)
			 {
        	    if (i % j == 0)
				 {
            	    isPrime = 0;
                	break;
            	}
        	}
        if (isPrime == 1)
		 {
            printf("%d ", i);
        }
    }
  }
  
