// Pattern - 7, diamond pattern
/*

    *		
   * *			
  * * *			
 * * * *		
* * * * *
 * * * *
  * * *
   * *
    *	

Base Pattern is Right Angled Triangle

*/
#include <stdio.h>

int main()
{
	int r, c;
	// upper triangle
	for (r=1;r<=5;r++)
	{
		// space pattern
		for (c=1;c <= 5-r;c++)
			printf("%c",32);  // 32 is ascii value of space.	printf(" "); OK
			
		// star-space pattern
		for (c=1;c<=r;c++)
			printf("*%c",32);
		
		printf("\n");
	}
	// lower triangle
	for (r=4;r>=1;r--)
	{
		// space pattern
		for (c=1;c<=4-r;c++)
			printf("%c",32);
			
		// space-star pattern
		for (c=1;c<=r;c++)
			printf("%c*",32);
			
		printf("\n");
	}	
	return 0;
}
