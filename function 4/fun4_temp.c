//function type 4

#include<stdio.h>
    float cel_fahren(int);
    float fahren_cel(int);
	void main()
	{
		int cel,fahren;
		
		printf("enter the temp in celcuis : ");
		scanf("%d",&cel);
		
		
		printf("enter the temp in fahreheint : ");
		scanf("%d",&fahren);
		
		float f = cel_fahren(cel);
		printf("The fahrenheit temperature will be %.2f\n ",f);
		
		float c = fahren_cel(fahren);
		printf("The celecuis teperature will be %.2f\n",c);
	}
	float cel_fahren(int c)
	{
		printf("The celecuis temp is %d and ",c);
		float f = (c+32)*9/5;
		return f ;
	}
	float fahren_cel(int f)
	{
		printf("The fahrenheit temp is %d and ",f);
		float c = (f-32)*5/9;
		return c ;
	}
