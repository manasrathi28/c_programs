// WAP to accept a filename from user & display it's contents
#include <stdio.h>
#include <stdlib.h>  // exit(0)

int main()
{
	FILE *fptr;  // pointer to special structure FILE
	char filename[20], ch;  // ch to fetch 1 by 1 char from file
	printf("Enter the filename :- ");
	gets(filename);
	// request to OS to return the FILE pointer
	fptr = fopen(filename,"r");  // 1. path is optional if executing prog & file to access
								// reside in same path
								// 2. Only existing files can be accessed for reading.
								// If file doesn't exist, we need to show appropriate message
	if (fptr == NULL)  // NULL is a macro defined in stdio.h with value 0.  #define NULL 0
						// When memory address is 0, it means that memory block is empty
	{
		printf("File %s doesn't exist",filename);
		exit(0);
	}
	// we are not aware of how much contents are there in the file
	while (1)  // unconditional or self initialised loop
	{
		ch = fgetc(fptr);
		if (ch == EOF)  // EOF is the end of file indicator with value -1. Nos are difficult
						// to remember & hence replaced using macro defns. fgetc() returns
						// the ascii code of char fetched & we know that ascii values are
						// from 0-255. So -1 indicates that there is no char at memory location
			break;
	
		printf("%c",ch);	
	}
	fclose(fptr);  // close the file after file operations are complete. If not, the file
				// may get corrupted
	return 0;	
}
