// Print the sum of 1st "n" terms of following series
// 1/1! + 2/2! + 3/3! + 4/4! + .......
#include <stdio.h>

int main()
{
	int no_terms, fv = 1, no;// no need to use count to count the no of terms as it is 
								// a natural series
	float sum = 0;
	printf("Enter the no of terms :- ");
	scanf("%d",&no_terms);
	for (no=1;no<=no_terms;no++)
	{
		fv *= no;  // factorial value of no = no * factorial value of previous no
		sum += (float)no/fv;  // typecast int to float		
	}
	printf("Sum of 1st %d no of terms is %f",no_terms,sum);
	return 0;
}
