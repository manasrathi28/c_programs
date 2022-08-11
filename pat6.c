// Pattern - 6, star pattern with stars aligned to the right
/*

    *		r=1, no_st=1, no_spaces=4
   **		r=2, no_st=2, no_spaces=3
  ***		r=3, no_st=3, no_spaces=2
 ****		r=4, no_st=4, no_spaces=1
*****		r=5, no_st=5, no_spaces=0

r + no_spaces = 5
no_spaces = 5 - r
So no of spaces is inversely proportional to row no
*/
#include <stdio.h>

int main()
{
	int r, c;
	for (r=1;r<=5;r++)
	{
		// space pattern
		for (c=1;c <= 5-r;c++)
			printf("%c",32);  // 32 is ascii value of space.	printf(" "); OK
			
		// star pattern
		for (c=1;c<=r;c++)
			printf("*");
		
		printf("\n");
	}
	return 0;
}
