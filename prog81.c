// To sort an array of strings
#include <stdio.h>
#include <string.h> // strcmp(), strcpy()

int main()
{
	char names[5][10] = {"manas","om","nihar","abhiram","ajay"}, temp[10]; // a string
															// for swapping names
	int i, j;
	printf("Before sorting, names are\n");
	for (i=0;i<5;i++)
		printf("%s ",names[i]);
		
	// sorting procedure
	for (i=1;i<5;i++)
	{
		for (j=0;j<5-i;j++)
		{
			if (strcmp(names[j],names[j+1]) > 0)
			{
				// temp = names[j];  // error
				strcpy(temp,names[j]);
				strcpy(names[j],names[j+1]);
				strcpy(names[j+1],temp);				
			}			
		}
	}
	printf("\nAfter sorting, names are\n");
	for (i=0;i<5;i++)
		printf("%s ",names[i]);
		
	return 0;
}
