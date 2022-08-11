// Accept source & target filenames from user & copy the contents of source file into
// target file
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fs, *ft;
	char srcfn[20], tgtfn[20], ch;
	printf("Enter source filename :- ");
	gets(srcfn);
	fs = fopen(srcfn,"r");
	if (fs==NULL)
	{
		printf("Source file %s not found",srcfn);
		exit(0);
	}
	printf("Enter the target filename :- ");
	gets(tgtfn);
	ft = fopen(tgtfn,"w"); // w mode means write mode. It means if target file doesn't exist,
							// create one. However if it exists, it is over written
	while (1)
	{
		ch = fgetc(fs);
		if (ch == EOF)
			break;
			
		fputc(ch,ft);  // write the char to target file
	}
	fclose(fs);
	fclose(ft);
	printf("File contents copied successfully");
	return 0;
}
