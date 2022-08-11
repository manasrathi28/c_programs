// WAP which copies the contents of source file into target file using command line args
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	FILE *fs, *ft;
	char ch;
	// validation
	if (argc != 3)
	{
		printf("Syntax Error");
		exit(0);
	}
	fs = fopen(argv[1],"r");
	if (fs == NULL)
	{
		printf("Source file %s doesn't exist",argv[1]);
		exit(0);
	}
	ft = fopen(argv[2],"w");
	while (1)
	{
		ch = fgetc(fs);
		if (ch == EOF)
			break;
		
		fputc(ch,ft);
	}
	fclose(fs);
	fclose(ft);
	printf("File contents copied successfully");
	return 0;
}
