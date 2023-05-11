#include<stdio.h>
main()
{
	char name[100];
	
	char temp[100];
	
	strcpy (temp,name);
	
	if(strcmp(temp,name)==234)
	{
		printf("string is palindrome");
	}
	else
	{
		printf("string is not palindrome");
	}
}
