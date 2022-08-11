// An eg of conditional operator (?)
// This operator is similar to "if" command i.e. it is also used in decision making programs
// However being an operator, it is more efficient than "if" command & hence preferred by
// programmers
// Syntax of ? operator
// var_name = logical expression ? Value if True : Value if False;
// Logical expression is the one which evaluates to True or False
// For eg 10 > 5 returns 1 (true), 10 < 5 returns 0 (false)
// determine the largest no from given 3 nos using conditional operator
#include <stdio.h>

int main()
{
	int no1, no2, no3, max;
	printf("Enter any 3 whole nos :- ");
	scanf("%d %d %d",&no1,&no2,&no3);
	// solution - 1, in 2 steps
	//max = no1 > no2 ? no1 : no2;
	//max = max > no3 ? max : no3;
	
	// solution - 2, in 1 step
	// we can use nesting of ? operator like nested if command
	//							  True1  False1           True2  False2
	max = no1 > no2 ? no1 > no3 ?  no1 : no3 :  no2 > no3 ? no2 : no3;
	//   			      True				        False
	printf("Largest no is %d",max);
	
	return 0;	
}
