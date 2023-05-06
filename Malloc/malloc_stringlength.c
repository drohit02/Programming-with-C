//Assignment no 24 : malloc

#include<string.h>
#include<stdio.h>
	void mystrlen(char*);
	void main()
	{
		char string[30];
		printf("enter the string : ");
		gets(string);
		
		int* ptr;
		ptr = (char*)malloc(30);
		
		mystrlen(string);
	}
	void mystrlen(char* str)
	{
		int i= 0;
		while(str[i]!='\0')
		{
			i++;
		}
		printf("\nthe length of entered string %s is %d",str,i);
	}
