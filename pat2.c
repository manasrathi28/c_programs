// Pattern - 2
// To print 20 lines, each of 60 dashes
#include <stdio.h>

int main()
{
	int r, c;
	// to execute the code 20 times
	for (r=1;r<=20;r++)
	{
		// use abstraction - using a simple name/term to indicate a process
		// to print a line of 60 dashes
		for (c=1;c<=60;c++)
			printf("-");
		
		printf("Row no - %d\n",r);
	}
	return 0;
}
