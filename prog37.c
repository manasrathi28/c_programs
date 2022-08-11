// eg-2 on switch case statement
// accept a character from user & display it
#include <stdio.h>

int main()
{
	char ch;
	printf("Enter your choice (A/B) :- ");
	scanf("%c",&ch);
	switch (ch)
	{
		case 'a':
		case 'A':
			printf("Your choice is A");
			break;
			
		case 'b':
		case 'B':
			printf("Your choice is B");
			break;
			
		default:
			printf("Your choice is neither A nor B");
	}
	return 0;
}
