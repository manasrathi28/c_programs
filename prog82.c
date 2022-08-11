// To display the memory map of 2D array of characters
#include <stdio.h>

int main()
{
	char names[5][10] = {"manas","om","nihar","abhiram","ajay"};
	int i;
	printf("Address\tValue\n");
	for (i=0;i<5;i++)
		printf("%u - %s\n",names[i],names[i]);
		
	return 0;
}	
