// accept 3 whole nos from user & display the largest no
#include <stdio.h>

int main()
{
	int no1, no2, no3;
	printf("Enter any 3 whole nos :- ");
	scanf("%d %d %d",&no1,&no2,&no3);
	if (no1 > no2)
	{
		if (no1 > no3)
			printf("The no %d is largest",no1);
		else  // no3 > no1
			printf("The no %d is largest",no3);
	}
	else  // no2 > no1
	{
		if (no2 > no3)
			printf("The no %d is largest",no2);
		else // no3 > no2
			printf("The no %d is largest",no3);		
	}
	return 0;	
}
// Even though the above program works, this style is not recommended bcoz it doesn't have
// "scalability" i.e. as the size of problem increases, the size of solution also increases.
