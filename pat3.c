// Pattern - 3
/*

*		r=1, no_st=1
**		r=2, no_st=2
***		r=3, no_st=3
****	r=4, no_st=4
*****	r=5, no_st=5

Differences between this pattern & previous pattern

1. Pattern character is * & not -
2. No of rows are 5 & not 20
3. No of *s is not a constant in each row but a variable equal to row no
*/
#include <stdio.h>

int main()
{
	int r, c;
	for (r=1;r<=5;r++)
	{
		
		// the printing loop of var c will iterate depending upon the row no
		for (c=1;c<=r;c++)
			printf("*");
		
		printf("\n");
	}
	return 0;
}
