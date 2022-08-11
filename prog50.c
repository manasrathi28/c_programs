// Print all nos from 1 - 100 using a single printf statement & without using a loop
#include <stdio.h>

// main() can also be made recursive

int main()
{
	static int no = 1;  // if not static, each copy of main() will initialise var no to 1,
						// making it print 1 only & will also result in error like infinite loop
	printf("%d ",no);
	no++;
	if (no <= 100)
		main();
		
	return 0;
}
