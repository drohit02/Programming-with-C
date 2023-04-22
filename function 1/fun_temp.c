// function type 1 

#include <stdio.h>
 void cel_fahren();
 void fahren_cel();
  void main()
  {
  	cel_fahren();
  	fahren_cel();
  }
  void cel_fahren () {
  	
  	float c ;
  	float f ;
  	
  	printf("Enter the degree celcuis temperature : ");
  	scanf("%f",&c);
  	
  	f = (c*9/5)+32;
  	
  	printf("the farhrenheit temperatute is %.2f convertd from %.2f degree celcius\n\n",f,c);
  }
  
  void fahren_cel() {
  	
  	float c ;
  	float f ;
  	
  	printf("enter the temperature in farenheit : ");
  	scanf("%f",&f);
  	
  	c = (f-32)*5/9 ;
  	
  	printf("the temp in degree celcuis is %.2f converted from %.2f fahrenheit",c,f);
  }
