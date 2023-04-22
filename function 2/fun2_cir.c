#include<stdio.h>
 float circle();
 int rectangle();
 void main()
 {	
 	float area_circle = circle();
 	printf("The area of the circle is %.2f\n",area_circle);
 	
 	int area_rectangle = rectangle();
 	printf("the are of the rectangle is %d",area_rectangle);
 }
 
 int rectangle()
 {
 	int length,breath;
 	
 	printf("Enter the length of rectangle : ");
 	scanf("%d",&length);
 	
 	printf("Enter the breath of rectangle : ");
 	scanf("%d",&breath);
 	int perimeter = 2*(length+breath);
 	int area = length*breath;
 	
 	printf("Perimeter of the rectangle is %d \n",perimeter);
 	return area ;
 }
 float circle()
 {
 	int radius;
 	
 	printf("Enter the radius of circle : ");
 	scanf("%d",&radius);
 	
 	float area = 3.14*radius*radius;
 	float perimeter = 2*3.24*radius;
 	
 	printf("The perimeter of the circle is %.2f\n",perimeter);
 	return area ;
 }
