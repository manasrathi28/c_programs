// Print the 1st 10 +ve ODD Nos
#include <stdio.h>

// Logic - In any series program, we have to start by assuming atleast the starting term of
// the series

int main()
{
	int no, count;   // assumption of value of no in loop
	//for (no=1;no<=19;no+=2)  // this logic is misleading & may not work with some other series
	// nth odd term = 2 * n - 1
	for (count=0,no=1;count < 10;count++,no+=2)  // increment no by 2 to get next ODD term
											// but bcoz only 1 term is printed at a time count++
		printf("%d ",no);
		
	return 0;
}
