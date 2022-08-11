// Series-4, to print the 1st "n" prime nos
// This program is different from previous prog in which if n was 10, o/p was 2 3 5 7
// However in this program, if n is 10, o/p should show 10 prime nos 2 3 5 7 11 13 17 19 23 29
#include <stdio.h>

int main()
{
	int no_terms, no, i, count, flag;
	printf("Enter the no of terms :- ");  // prime nos?
	scanf("%d",&no_terms);
	printf("1st %d prime nos are\n",no_terms);
	// go on generating nos & stop only when specified no of prime nos are printed
	for (no=1,count=0;count<no_terms;no++)  // no count++ bcoz every number generated may
											// not be a prime no
	{
		if (no == 1)
			continue;
		flag = 1;  // assume that no is prime
		for (i=2;i<=no/2;i++)
		{
			if (no%i == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ",no);
			count++;  // imp, count as it is a prime no
		}
	}
	return 0;
}
