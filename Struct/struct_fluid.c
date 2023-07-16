//Assignment No 27 :Struct

#include<stdio.h>
#include<string.h>

	struct hydraulic_fluid
	{
		char name [20];
		char supplier [20];
		float viscosity;
		int price_barrel ;	
	};
	void main()
	{
		printf("Program :Sruct for Hydraulic Oil");
		struct hydraulic_fluid hf1;
		strcpy(hf1.name,"Magma 68");
		strcpy(hf1.supplier,"HP");
		hf1.viscosity = 8.8;
		hf1.price_barrel = 22000;
		
		printf("\n\nName of Hydraulic Oil : %s",hf1.name);
		printf("\nSupplier of Hydraulic Oil : %s",hf1.supplier);
		printf("\nViscosity of Oil at 100 degree Celcius :%.1f",hf1.viscosity);
		printf("\nPrice of the Oil : %d\n",hf1.price_barrel);
		
		struct hydraulic_fluid hf2;
		printf("\nEnter the Name of Oil : ");
		gets(hf2.name);
		printf("\nEnter the Supplier of Oil : ");
		gets(hf2.supplier);
		printf("\nViscosity of Oil :");
		scanf("%f",&hf2.viscosity);
		printf("\nPrice of Oil : ");
		scanf("%d",&hf2.price_barrel);
		
		printf("\n\nName of Hydraulic Oil : %s",hf2.name);
		printf("\nSupplier of Hydraulic Oil : %s",hf2.supplier);
		printf("\nViscosity of Oil at 100 degree Celcius :%.1f",hf2.viscosity);
		printf("\nPrice of the Oil : %d",hf2.price_barrel);
		
	}
