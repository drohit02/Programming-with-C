//function type 3

#include <stdio.h>

void perfect(int n);

void main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Perfect numbers between 1 and %d are:\n", num);
    perfect(num);
}
void perfect(int n) 
{
    int i, j, sum;
	    for (i = 2; i <= n; i++)
		 {
    		sum = 0;
        		for (j = 1; j <= i / 2; j++)
				 {
            		if (i % j == 0) 
					{	
                		sum += j;
            		}
        		}
        	if (sum == i)
		 	{
        	    printf("%d ", i);
        	}
    	}
}

