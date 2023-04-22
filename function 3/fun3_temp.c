//function type 3

#include<stdio.h>
void cel_fahren(int);
void fahren_cel(int);
void main()
{
	int cel ;
	int fahren ;
	
	printf("Enter the temperature in celcius : ");
	scanf("%d",&cel);
	
	
	printf("Enter the temperature in fahrenheit : ");
	scanf("%d",&fahren);
	
	cel_fahren(cel);
	fahren_cel(fahren);
}
void cel_fahren(int c)
{
	float f = (c+32)*9/5;
	
	printf("the fahrenheit of the %d celcuis is %.2f\n",c,f);
}
void fahren_cel(int f)
{
	float c = (f-32)*5/9;
	printf("the celcuis of the %d fahrenheit is %.2f\n",f,c);
}
