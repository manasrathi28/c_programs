// Print the 1st "n" terms of following series
// -2 2 14 34 62......
// The series is square of even nos starting from 0 - 2
#include <stdio.h>

int main()
{
	int no, no_terms, count;
	printf("Enter the no of terms :- ");
	scanf("%d",&no_terms);
	for (no=0,count=0;count<no_terms;count++,no+=2)
		printf("%d ",no*no-2);
		
	return 0;
}

