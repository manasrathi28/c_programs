// to join the contents of 1 string (source) to another string (target) at the end
#include <stdio.h>
#include <string.h>

int main()
{
	char src[20], tgt[40]; // target string should have more width bcoz it needs accomodate
							// it's data + data from source string
	printf("Enter source string :- ");
	gets(src);
	printf("Enter target string :- ");
	gets(tgt);
	strcat(tgt,src);  // syntax - target, source
	printf("After concatenating, contents of tgt string are %s",tgt);
	return 0;
}
// o/p
//Enter source string :- computer classes
//Enter target string :- databyte
//After copying, contents of tgt string are databyte computer classes
//Target string is appended (add at end) with contents of source
