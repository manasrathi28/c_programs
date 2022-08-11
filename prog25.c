// accept the principle, rate of interest and years of investment & calculate & display
// simple interest (pnr/100) 3 times
#include <stdio.h>

int main()
{

	int prin, no_years, count = 0;  // compulsory to initialise
	float rate_int, simple_int;
 	while (count < 3)
	{
		printf("\nEnter the principle, rate of interest and years of investment :- ");
		scanf("%d %f %d",&prin,&rate_int,&no_years);	
		simple_int = prin * rate_int * no_years / 100;	
		printf("Simple Interest is Rs. %.2f",simple_int);
		count++;  // count = count + 1;  // imp otherwise will result in infinite loop
	}
	return 0;
}
