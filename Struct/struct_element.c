//Assignment No 27 :Struct

#include<string.h>
#include<stdio.h>

	struct element
	{
		char name [20];
		char state [20];
		char nature [20] ;
		int atomic_number ;
	};
	void main()
	{
		printf("Program : Struct for Element\n");
		
		struct element e1;
		strcpy(e1.name,"Uranium");
		strcpy(e1.state,"Solid");
		strcpy(e1.nature,"Radioactive");
		e1.atomic_number = 92 ;
		
		printf("\n\nName of the Element : %s",e1.name);
		printf("\nState of element at room temperature : %s",e1.state);
		printf("\nNature of element : %s",e1.nature);
		printf("\nAtomic Number of element : %d",e1.atomic_number);
		
		struct element e2 ;
		printf("\n\nEnter the name of Element : ");
		gets(e2.name);
		printf("\nEnter the state of element : ");
		gets(e2.state);
		printf("\nEnter the nature of element :");
		gets(e2.nature);
		printf("\nEnter the Atomic Number of element :");
		scanf("%d",&e2.atomic_number);
		
		printf("\n\nName of the Element : %s",e2.name);
		printf("\nState of element at room temperature : %s",e2.state);
		printf("\nNature of element : %s",e2.nature);
		printf("\nAtomic Number of element : %d",e2.atomic_number);
		
	}
