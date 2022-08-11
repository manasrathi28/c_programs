// an eg of typecasting
// typecasting means changing the datatype of a variable temporarily for the sake of calculations
// i.e. if we don't use typecasting, we may not get accurate results
#include <stdio.h>

int main()
{
	// self initialised vars
	int numer = 22, denom = 7;
	float pi;
	pi =  (float) numer / denom;   // (float) will treat numer as float & then divide
	printf("Value of pi is %f",pi);
	return 0;
}
