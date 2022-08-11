// to compare the data of 2 Strings
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20], str2[20];
	printf("Enter string 1 :- ");
	gets(str1);
	printf("Enter string 2 :- ");
	gets(str2);
	if (stricmp(str1,str2) == 0)
		printf("Given 2 strings are same");
	else
		printf("Given 2 strings are not same");
		
	return 0;
}
