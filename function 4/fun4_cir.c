//function type 4

#include<stdio.h>
 float circle(int);
 int rectangle(int,int);
 void main()
 {
 	int l,b,r;
 	
 	printf("Enter the length of rectangle : ");
 	scanf("%d",&l);
 	
 	printf("Enter the breath of rectangle : ");
 	scanf("%d",&b);
 	
 	printf("Enter the radius of circle : ");
 	scanf("%d",&r);
 	
 	float area_circle = circle(r);
 	printf("The area of the circle is %.2f\n",area_circle);
 	
 	int area_rectangle = rectangle(l,b);
 	printf("the are of the rectangle is %d",area_rectangle);
 }
 
 int rectangle(int length,int breath)
 {
 	int perimeter = 2*(length+breath);
 	int area = length*breath;
 	
 	printf("Perimeter of the rectangle is %d \n",perimeter);
 	return area ;
 }
 float circle(int radius)
 {
 	float area = 3.14*radius*radius;
 	float perimeter = 2*3.24*radius;
 	
 	printf("The perimeter of the circle is %.2f\n",perimeter);
 	return area ;
 }
