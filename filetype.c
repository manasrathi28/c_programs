// Accept a filename as command line argument & display it's contents
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	FILE *fptr;
	char ch;
	// validation, check for no of arguments passed
	if (argc != 2)
	{
		printf("Syntax Error");
		exit(0);
	}
	// get access to the file using FILE pointer
	fptr = fopen(argv[1],"r");  // argv[0] is command
	if (fptr == NULL)
	{
		printf("File %s not found",argv[1]);
		exit(0);
	}
	while (1)
	{
		ch = fgetc(fptr);
		if (ch == EOF)
			break;
			
		printf("%c",ch);
	}
	fclose(fptr);
	return 0;	
}
// Steps to execute
// 1. Save the file in the name of "filetype.c" i.e. in the name of it's application bcoz
// after compilation, file with same name with "exe" extension gets created.
// 2. Compile the program to create "exe" file but don't run it bcoz it shows syntax error
// 3. Go to command prompt & type
// >filetype test.txt (ENTER)

