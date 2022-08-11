// Accept the starting & ending position from user & print all fibonacci terms in that range
// pos -->    1  2   3   4    5    6     7     8      9      10      11      12
// terms -->  0  1   1   2    3    5     8     13    21      34      55      89
// eg 
// start pos - 5
// end pos   - 10
// o/p should be :   3 5 8 13 21 34
// Logic - Here we are not aware as to which fibo term exists at start pos
// So the idea is to generate the fibo terms from pos 1 only but start printing once
// we reach start_pos
#include <stdio.h>

int main()
{
	int curr_term = 0, next_term = 1, pos, start_pos, end_pos;
	printf("Enter the starting pos of term :- ");
	scanf("%d",&start_pos);
	printf("Enter the ending pos of term :- ");
	scanf("%d",&end_pos);
	for (pos=1;pos<=end_pos;pos++)
	{
		if (pos >= start_pos)
			printf("%d ",curr_term);
			
		next_term = curr_term + next_term;
		curr_term = next_term - curr_term;
	}
	return 0;	
}
