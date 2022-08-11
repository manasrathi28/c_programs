// toran pattern - HW
/*
ABCDEFGFEDCBA		spaces = 0
ABCDEF FEDCBA		spaces = 1
ABCDE   EDCBA		spaces = 3
ABCD     DCBA		spaces = 5
ABC       CBA		spaces = 7
AB         BA		spaces = 9
A           A		spaces = 11

Hint - Start with Left, then Right & then Center space pattern
*/
#include <stdio.h>

int main()
{
	int r, c, no_spaces = 1;
	char ch;
	for (r=7;r>=1;r--)
	{
		// left side
		ch = 'A';
		for (c=1;c<=r;c++)
		{
			printf("%c",ch);
			ch++;
		}
		// space pattern
		if (r != 7)
		{
			for (c=1;c<=no_spaces;c++)
				printf("%c",32);
						
			no_spaces += 2;  // no of spaces to print is ODD no
		}	
		
		// right side
		ch--;  // imp
		for (c=1;c<=r;c++)
		{
			if (ch != 'G')  // bcoz G is missing on RHS
				printf("%c",ch);
				
			ch--;
		}		
		printf("\n");
	}
	return 0;	
}
