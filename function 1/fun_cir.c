//Function type 1

#include <stdio.h>

 void circle();
 void reactangle();
 
 void main () {
     	
     	circle();
     	reactangle();
 }
 void circle () {
 	
 	int radius ;
 	float area = 0.0 ;
 	float circumference = 0.0 ;
 	
 	printf("enter the radius of the circle : ");
 	scanf("%d",&radius);
 	
 	area = 3.14*radius*radius ;
 	circumference = 2*3.14*radius ;
 	
 	printf("the area of circle is %.f\n\n",area);
 	printf("the circumference of circle is %.2f\n\n",circumference);
 }
 void reactangle () {
 	 int l ;
 	 int b ;
 	 int area ;
 	 int perimeter ;
 	 
 	 printf("enter the length of the rectangle : ");
 	 scanf("%d",&l);
 	 
 	 printf("enter the breath of the rectangle : ");
 	 scanf("%d",&b);
 	 
 	 area = l*b;
 	 perimeter = 2*l*b ; 
 	  
 	  
 	 printf("area of the rectangle is : %d\n\n",area);
 	 
 	 printf("perimeter of the rectangle is : %d\n\n",perimeter);
 }
