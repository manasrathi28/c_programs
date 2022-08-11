// An eg of strupr()
#include <stdio.h>
#include <string.h>

int main()
{
	char sent[35];
	printf("Enter a sentence :- ");
	gets(sent);
	strlwr(sent);
	printf("Given sentence in caps is %s",sent);
	return 0;
}
