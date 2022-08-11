// Print the sum of 1st "n" +ve ODD Nos
#include <stdio.h>

int main()
{
	int no, count, no_terms, sum = 0;  // running total
	printf("Enter the no of terms :- ");
	scanf("%d",&no_terms);
	for (no=1,count=0;count < no_terms;no+=2,count++)
		sum += no;
		
	printf("Sum of 1st %d no of terms is %d",no_terms,sum);
	return 0;
}
