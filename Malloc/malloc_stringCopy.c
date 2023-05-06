//Assignment 24 : Malloc

#include<string.h>
#include<stdio.h>
	void mystrcpy(char*);
	void main()
	{
		char string[30];
		printf("enter the string : ");
		gets(string);
		
		int* ptr;
		ptr = (char*)malloc(30);
		
		mystrcpy(string);
	}
	void mystrcpy(char*str1)
	{
		int i = 0 ;
		char str2[30];
		
		while(str1[i]!='\0')
		{
			str2[i]=str1[i];
			i++;
		}
		str2[i] = '\0';
		
		printf("\n the string coping in another string is : %s",str2);
	}
