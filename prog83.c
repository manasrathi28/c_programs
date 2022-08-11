// To display the memory map of 1D array of pointers to strings
#include <stdio.h>

int main()
{
	char *names[5] = {"manas","om","nihar","abhiram","ajay"};
	// names is an array of 5 pointers to strings
	int i;
	printf("Address\tValue\n");
	for (i=0;i<5;i++)
		printf("%u - %s\n",names[i],names[i]);
		
	return 0;
}	
