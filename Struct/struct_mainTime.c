//Assignment 29 :Struct :Array of the Struct Varible :Time

struct Time
	{	
		int hrs;
		int min ;
		int sec ;
	};
	void storeTime(struct Time*,int);
	void conversion(struct Time*,int);
	void main()
	{
		int n ;
		printf("Enter the number of time slot want to store : ");
		scanf("%d",&n);
		
		struct Time trr[n];
		
		storeTime(trr,n);
		conversion(trr,n);
	}
	void storeTime(struct Time* arr,int num)
	{
		int i = 0;
		for (i=0;i<num-1;i++)
		{	
			printf("Enter the clock hour : ");
			scanf("%d",&arr[i].hrs);
			printf("Enter the clock min : ");
			scanf("%d",&arr[i].min);
			printf("Enter the clock sec : ");
			scanf("%d",&arr[i].sec);
			printf("\n"); 			
		}
		for (i=0;i<num-1;i++)
		{
			printf("The time is(HH:MM:SS) = %d:%d:%d\n",arr[i].hrs,arr[i].min,arr[i].sec);	
		}				
	}
	void conversion(struct Time* arr,int num)
	{
		int i,que,rem;
		
		i=que=rem= 0 ;
		
		int totalSec =0 ;
		for(i=0;i<num-1;i++)
		{
			totalSec = (totalSec)+(arr[i].hrs*3600)+(arr[i].min*60)+(arr[i].sec);
		}
		//Addition of the two time variabe
		arr[i].hrs = totalSec/3600;
		arr[i].min =(totalSec%3600)/60 ;
		arr[i].sec = (totalSec%3600)%60 ;
		if(arr[i].sec>59)
		{
			que = arr[i].sec/60;
			rem = arr[i].sec%60;
			arr[i].sec = rem;
		}
		arr[i].min = arr[i].min + que ;
		printf("\nThe addition and total time is in(HH:MM:SS) : %d:%d:%d",arr[i].hrs,arr[i].min,arr[i].sec);
		printf("\nTotal Hours in Second is : %d",totalSec);
	}

		
