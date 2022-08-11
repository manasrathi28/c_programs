// eg-2 on concept of pointers
#include <stdio.h>

int main()
{
	int i = 5, *j;  // normal & pointer vars can be declared in same line
	j = &i;  // establishing relationship between 2 vars
	printf("Value in var i is %d",i);  // 5
	printf("\nValue in var i is %d",*(&i)); // 5
	printf("\nValue in var i is %d",*j);  // 5
	printf("\nAddress of var i is %u",&i);  // 600
	printf("\nAddress of var i is %u",j);  // 600
	printf("\nAddress of var j is %u",&j);  // 903, 604, 596, ... any no other than
							// 600 to 603 bcoz int i require 4 blocks of memory
	return 0;
}
