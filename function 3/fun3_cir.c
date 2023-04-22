//function type 3 area and perimenter of the circle and rectangle 

#include<stdio.h>

 void rectangle(int,int);
 void circle(int);

 void main()
 {
 	int radius;
 	int length;
 	int breath;
 	
 	printf("Enter the radius of the Circle : ");
 	scanf("%d",&radius);
 	
 	
 	printf("Enter the length of Rectangle : ");
 	scanf("%d",&length);
 	
 	printf("Enter the breath of Rectangle : ");
 	scanf("%d",&breath);
 	
 	rectangle(length,breath);
 	circle(radius);
  } 
  void rectangle(int l,int b)
  {
  	int area;
  	int perimeter;
  	
  	area = l*b;
  	perimeter = 2*(l+b);
  	
  	printf("The area of the rectangle is : %d\n",area);
  	printf("The perimeter of the rectangle is : %d\n",perimeter);
  }
  void circle(int r)
  {
  	float area;
  	float perimeter;
  	
  	area = 3.14*r*r;
  	perimeter = 2*3.14*r;
	  
	printf("the area of the circle is : %.2f\n",area); 
	printf("the perimeter of the perimeter is : %.2f\n",perimeter);
  }
