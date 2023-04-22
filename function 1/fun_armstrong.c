//function type 1

 #include <stdio.h>
  void arm();
  void main () {
  	
  	arm();
  	
  }
  void arm() {
  	
  	int num,rem,temp,sum=0;
  	
  	printf("enter any 3-digit number:");
  	scanf("%d",&num);
  	
  	temp=num;
  	
  	if (num>100 && num<1000)
  	{
  	    while(num>0)
  	    {
  		    rem = num%10;
  		    sum = sum+(rem*rem*rem);
  		    num = num/10;
	    }
	    if (temp=sum)
	    {
		printf("the entered number %d is armstrong number",temp);
    	}
	    else {
		printf("the entered number %d is armstrong number",temp);
  	    }
    }
    else if(num>999 && num <10000)
    {
    	while(num>0)
  	    {
  		    rem = num%10;
  		    sum = sum+(rem*rem*rem*rem);
  		    num = num/10;
	    }
	    if (temp=sum)
	    {
		printf("the entered number %d is armstrong number",temp);
    	}
	    else {
		printf("the entered number %d is armstrong number",temp);
  	    }
	}
  }

  
