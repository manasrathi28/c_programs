// Print the 1st "n" terms of following series
// 2 5 10 17 26 37 50......
// Logic - The above series is square of natural nos + 1
#include <stdio.h>

int main()
{
	int no, count, no_terms;
	printf("Enter the no of terms :- ");
	scanf("%d",&no_terms);
	for (no=1,count=0;count<no_terms;no++,count++)
		printf("%d ",no*no+1);
		
	return 0;	
}
