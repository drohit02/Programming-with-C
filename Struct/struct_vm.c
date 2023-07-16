//Assignment No 27: Struct

#include<stdio.h>
#include<string.h>

	struct virtual_machine
	{
		char provider [20];
		char OS [10] ;
		int RAM ;
		int storage_in_gb;
	};
	void main()
	{
		printf("Program : Struct for Virtual machine\n");
		
		struct virtual_machine vm1;
		strcpy(vm1.provider,"Azure");
		strcpy(vm1.OS,"Linux");
		vm1.RAM = 4;
		vm1.storage_in_gb=256;
		
		printf("\nVM Provider : %s",vm1.provider);
		printf("\nOpearing Syste of VM : %s",vm1.OS);
		printf("\nRAM of VM (GB):%d",vm1.RAM);
		printf("\nStorage of VM (GB) : %d\n",vm1.storage_in_gb);	
		
		struct virtual_machine vm2 ;
		printf("\nEnter the provider of VM :");
		gets(vm2.provider);
		printf("\nEnter the OS of VM : ");
		gets(vm2.OS);
		printf("\nEnter the RAM of VM (GB): ");
		scanf("%d",&vm2.RAM);
		printf("\nEnter the Storage provided to VM (GB) : ");
		scanf("%d",&vm2.storage_in_gb);
		
		printf("\nVM Provider : %s",vm2.provider);
		printf("\nOpearing Syste of VM : %s",vm2.OS);
		printf("\nRAM of VM (GB):%d",vm2.RAM);
		printf("\nStorage of VM (GB) : %d\n",vm2.storage_in_gb);	
	}
