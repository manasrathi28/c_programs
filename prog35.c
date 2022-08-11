// Using bottom tested loop, print "Hello" 5 times
#include <stdio.h>

int main()
{
	int count = 0;
	do
	{
		printf("Hello\n");
		count++;
	} while (count < 5);  // if True, control of program goes to "do" statement, otherwise
						// terminates the loop
	return 0;
}
