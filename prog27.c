// to execute the loop depending upon user's choice unlike previous eg where the loop executed
// a fix no of times
// accept a whole no from user & display it's square & repeat the process till the user
// says "stop"('n') - Alternative technique
#include <stdio.h>

int main()
{
	int no, sq;
	char ask;   // note var ask is not initialised
	while (1)   // self-initialised loop, 1 - true. The loop is not dependent on value of
				// a variable. Any no other than 0 is treated as true.
	{
		printf("Enter the no :- ");
		scanf("%d",&no);
		sq = no * no;
		fflush(stdin);  
		printf("Square of no %d is %d",no,sq);
		printf("\nContinue (y/n) :- ");
		scanf("%c",&ask);
		if (ask == 'y' || ask == 'Y')
			continue; // takes the control of prog back to start of while loop
		else
			break; // terminates the loop
	}
	return 0;
}

