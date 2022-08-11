// Pattern - 4
// Based on pat3
/*

*****	r=5, no_st=5
****	r=4, no_st=4
***		r=3, no_st=3
**		r=2, no_st=2
*		r=1, no_st=1

*/
#include <stdio.h>

int main()
{
	int r, c;
	for (r=5;r >= 1;r--)   // decremental loop
	{
		// the printing loop of var c will iterate depending upon the row no
		for (c=1;c<=r;c++)
			printf("*");
		
		printf("\n");
	}
	return 0;
}
