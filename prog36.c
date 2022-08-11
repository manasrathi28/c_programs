// eg-1 on switch case statement
// accept a whole no between 5-7 only & display it
#include <stdio.h>

int main()
{
	int no;
	printf("Enter any whole no between 5-7 only :- ");
	scanf("%d",&no);
	switch (no)
	{
		case 5:
			printf("You typed 5");
			break;
		case 6:
			printf("You typed 6");
			break;
		case 7:
			printf("You typed 7");
			break;
		default:
			printf("The no you typed is not between 5-7");
	}
	return 0;	
}
