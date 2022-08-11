// Print the 1st "n" terms of +ve ODD Nos/Series
#include <stdio.h>

int main()
{
	int no, count, no_terms;
	printf("Enter the no of terms reqd :- ");
	scanf("%d",&no_terms);
	for (count=0,no=1;count < no_terms;count++,no+=2)
		printf("%d ",no);
		
	return 0;
}
