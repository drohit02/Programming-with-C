//function type 3

#include<stdio.h>
 void strong(int);
 void main()
 {
 	int range ;
 	
 	printf("Enter range for the stong number : ");
 	scanf("%d",&range);
 	
 	strong(range);
 }
 void strong(int n) {
    int i, j,k, fact, digit, sum;
    for (i = 1; i <= n; i++) {
        sum = 0;
        j = i;
        while (j != 0) {
            fact = 1;
            digit = j % 10;
            for (k = 1; k <= digit; k++) {
                fact *= k;
            }
            sum += fact;
            j /= 10;
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
}
