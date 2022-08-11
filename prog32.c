// Accept a whole no from user & determine whether it is a prime no or not
// Defn of a prime no - Prime number is a number with no divisors other than 1 or itself
#include <stdio.h>

int main()
{
	int no, i, flag = 1;  // flag is not a keyword but a var preferred by developers, authors
					// & teachers used to test the success of a process. It is assigned
					// 1 if process is successful, 0 if unsuccessful
					// flag is initialised to value 1 means the test results will be successful
					// & given no is a prime no
	printf("Enter a no :- ");
	scanf("%d",&no);
	// generate the divisors for the no
	// largest divisor of any no is 1/2 of that no
	// 28 --> 1 2 4 7 14, 24 --> 1 2 3 4 6 8 12
	for (i=2;i<=no/2;i++)
	{
		// divisibility test --> Result --> true or false
		// true means test is successful i.e. no has a divisor & hence it is not a prime no
		// the divisibility test should return remainder 0
		if (no % i == 0)
		{
			flag = 0;  // test for prime is unsuccessful
			break;    // divisor found, so we terminate the test
		}
	}
	if (flag == 1)
		printf("Given no is a Prime No");
	else
		printf("Given no is not a Prime No bcoz it has a divisor %d",i);
		
	return 0;	
}
