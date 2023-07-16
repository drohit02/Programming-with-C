//Assignment 28 :Struct pass by value

#include<stdio.h>
#include<string.h>

	struct virtual_machine
	{
		char provider [20];
		char OS [20];
		int RAM ;
		int storage;
	};
	struct virtual_machine storeVM(struct virtual_machine);
	void displayVM(struct virtual_machine);
	void main()
	{
		printf("Program :Struct Pass by Value\n");
		struct virtual_machine vm1;
		
		vm1 = storeVM(vm1);
		      displayVM(vm1);
	}
	struct virtual_machine storeVM(struct virtual_machine vm2)
	{
		printf("\nEnter the provider of Virtual Machine :");
		gets(vm2.provider);
		printf("\nEnter the Operating System of Virtual Machine :");
		gets(vm2.OS);
		printf("\nEnter the RAM od Virtual Machine : ");
		scanf("%d",&vm2.RAM);
		printf("\nEnter the storage of Virtual Machine : ");
		scanf("%d",&vm2.storage);
		return vm2;
	}
	void displayVM(struct virtual_machine vm3)
	{
		printf("\nName of provider of virtual machine :%s",vm3.provider);
		printf("\nOperating System of virtual machine :%s",vm3.OS);
		printf("\nRAM of virtual machine:%d",vm3.RAM);
		printf("\nStorage of virtual machine :%d",vm3.storage);
	}
