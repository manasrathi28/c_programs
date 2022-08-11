// to copy the contents of 1 string (source) into another string (target)
#include <stdio.h>
#include <string.h>

int main()
{
	char src[20], tgt[20];
	printf("Enter source string :- ");
	gets(src);
	printf("Enter target string :- ");
	gets(tgt);
	//tgt = src;  // error, strings cannot be copied using assignment operator
	strcpy(tgt,src);
	printf("After copying, contents of tgt string are %s",tgt);
	return 0;
}
// o/p
//Enter source string :- databyte
//Enter target string :- computer classes
//After copying, contents of tgt string are databyte
//Target string is completely overwritten
