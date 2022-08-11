// Pattern - 9, Alphabet Pattern
/*

ABCDE		r = 5, no_ch = 5, no_spaces = 0
 BCDE		r = 4, no_ch = 4, no_spaces = 1
  CDE		r = 3, no_ch = 3, no_spaces = 2
   DE		r = 2, no_ch = 2, no_spaces = 3
    E		r = 1, no_ch = 1, no_spaces = 4
  
Logic
1. No of characters to print is directly proportional to row no
2. No of spaces to print is inversely proportional to row no
3. Every row starts with char + 1 after start char of previous row

*/
#include <stdio.h>
int main()
{
	int r, c;
	char ch = 'A', temp;  // var temp is used for printing purpose whereas var ch is used
							// to store the starting char for each row
	for (r=5;r>=1;r--)
	{
		// space pattern
		for (c=1;c<=5-r;c++)
			printf("%c",32);
			
		// char pattern
		temp = ch;
		for (c=1;c<=r;c++)
		{
			printf("%c",temp);
			temp++;
		}
		ch++; // go to next char
		printf("\n");				
	}		
	return 0;						
}
