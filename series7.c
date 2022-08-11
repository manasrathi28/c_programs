// Print the 1st "n" terms of following series
// 0 1 1 2 3 5 8 13 21 34 55 89 144 .....
// This series is known as "Fibonacci Series" in which we assume the 1st 2 terms 0 & 1
// The remaining terms are generated by adding the previous 2 terms
#include <stdio.h>

int main()
{
	int no_terms, count, curr_term = 0, next_term = 1;
	printf("Enter the no of terms reqd :- ");
	scanf("%d",&no_terms);
	for (count=0;count < no_terms;count++)
	{
		printf("%d ",curr_term);
		next_term = curr_term + next_term;
		curr_term = next_term - curr_term;		
	}
	return 0;
}