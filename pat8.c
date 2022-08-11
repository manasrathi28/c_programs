// Alphabet Pattern - Pattern 8
/*
A			r = 1, no_chs = 1, start_ch = 'A'
AB			r = 2, no_chs = 2, start_ch = 'A'
ABC			r = 3, no_chs = 3, start_ch = 'A'
ABCD		r = 4, no_chs = 4, start_ch = 'A'
ABCDE		r = 5, no_chs = 5, start_ch = 'A'

*/
#include <stdio.h>

int main()
{
	int r, c;
	char ch;
	for (r=1;r<=5;r++)
	{
		// imp - every row starts with letter 'A'
		ch = 'A';
		for (c=1;c<=r;c++)
		{
			printf("%c",ch);
			ch++;  // bcoz chars are stored using their ascii values
		}
		printf("\n");
	}
	return 0;
}
