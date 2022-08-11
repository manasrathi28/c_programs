// An eg of strrev()
#include <stdio.h>
#include <string.h>

int main()
{
	char sent[35];
	printf("Enter a sentence :- ");
	gets(sent);
	strrev(sent);
	printf("Reverse of given sentence is %s",sent);
	return 0;
}
