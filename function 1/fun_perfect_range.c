
#include <stdio.h>

 void perfect_range();
 void main () {
 	
 	perfect_range();
 }

 void perfect_range() {
     int i, j, end, sum;
     printf("Enter last limit: ");
     scanf("%d", &end);

     printf("All Perfect numbers between 1 to %d:\n", end);
    
     for(i=1; i<=end; i++)
     {
        sum = 0;
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
        if(sum == i)
        {
            printf("%d, ", i);
        }
    }
}
