//function type 2

    float cel_fahren();
    float fahren_cel();
	void main()
	{   
		float f = cel_fahren();
		printf("The fahrenheit temperature will be %.2f\n ",f);
		
		float c = fahren_cel();
		printf("The celecuis teperature will be %.2f\n",c);
	}
	float cel_fahren()
	{
		int cel;
		printf("enter the temp in celcuis : ");
		scanf("%d",&cel);
		
		printf("The celecuis temp is %d and ",cel);
		
		float fahren = (cel+32)*9/5;
		return fahren ;
	}
	float fahren_cel()
	{
		int fahren;
		printf("enter the temp in fahreheint : ");
		scanf("%d",&fahren);
		
		printf("The fahrenheit temp is %d and ",fahren);
		float cel = (fahren-32)*5/9;
		return cel ;
	}
