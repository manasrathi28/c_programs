// Different techniques to print a String
#include <stdio.h>
#include <string.h>

int main()
{
	char name[] = "databyte computers trg center, pune";
	int i;
	char *ptr;
	// method - 1, string terminates with null char i.e. \0
	for (i=0;name[i] != '\0';i++)
		printf("%c",name[i]);
		
	printf("\n");
	
	// method - 2, using length of string
	for (i=0;i<strlen(name);i++)
		printf("%c",name[i]);
		
	printf("\n");
	
	// method - 3, using pointers
	ptr = name;  // if we assign the name of array to a pointer var, we get the base address
				// of array i.e. the address of 0th element
	//ptr = &name[0];  // OK but not popular
	while (*ptr != '\0')
	{
		printf("%c",*ptr);
		ptr++;  // when pointer is incremented, it auto points to next value of same type
	}
	printf("\n");
	
	// method - 4, using format specifier "%s" to print. These are not available for
	// numeric arrays but only for char arrays bcoz @ times, we may store long passages
	// of text in a string & to display it fast, use format specifier
	printf("%s",name);
	
	return 0;
}
