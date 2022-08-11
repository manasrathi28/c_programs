// to execute the loop depending upon user's choice unlike previous eg where the loop executed
// a fix no of times
// accept a whole no from user & display it's square & repeat the process till the user
// says "stop"('n')
#include <stdio.h>

int main()
{
	int no, sq;
	char ask = 'y';  // loop var has to be initialised
	while (ask == 'y' || ask == 'Y')
	{
		printf("Enter the no :- ");
		scanf("%d",&no);
		sq = no * no;
		fflush(stdin);  // To clear the ENTER key stored in buffer, which otherwise is taken
						// as answer for next qn i.e. var ask & any value other than 'y' is
						// treated as 'n' & loop terminates
		printf("Square of no %d is %d",no,sq);
		printf("\nContinue (y/n) :- ");
		scanf("%c",&ask);
	}
	return 0;
}

