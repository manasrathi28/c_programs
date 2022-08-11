// accept the principle, rate of interest and years of investment & calculate & display
// simple interest (pnr/100)
#include <stdio.h>

int main()
{
	// type & declaration statements
	int prin, no_years;
	float rate_int, simple_int;
 	// i/p from user
	printf("Enter the principle, rate of interest and years of investment :- ");
	scanf("%d %f %d",&prin,&rate_int,&no_years);
	// arithmetical expression
	simple_int = prin * rate_int * no_years / 100;
	// display the result
	printf("\nSimple Interest is Rs. %.2f",simple_int);  // .2f means print upto 2 decimals only
						// bcoz paise to Rs. conversion is 100. If 3rd digit in decimals is
						// >= 5, it will add 1 to digit on left (rounding)
	return 0;
}
