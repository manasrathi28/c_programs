// to display the data of 2D array of characters
#include <stdio.h>

int main()
{
	//char names[5][10] = {"manas","om","nihar","abhiram","ajay"};  // OK
	char names[5][10] = {
						"manas",
						"om",
						"nihar",
						"abhiram",
						"ajay"
						};   
	int i;  // var j & nested loop is not reqd bcoz we can represent strings while printing
			// using format specifier %s
	printf("Names are\n");
	for (i=0;i<5;i++)
		printf("%s\n",names[i]);
		
	return 0;
}
