// an eg of self initialised array
// to determine the no of ODD & EVEN terms from array
#include <stdio.h>

int main()
{
	// stop...
	int nos[ ] = {34,0,67,-123,111,90,64,111,74,10}, noe, i, cntr_odd = 0;
	noe = sizeof(nos) / sizeof(int);  // no of elements is total size of all elements/size of
											// single element
	for (i=0;i<noe;i++)
	{
		if (nos[i] % 2 != 0)
			cntr_odd++;  // cntr_odd = cntr_odd + 1;
	}
	printf("No of ODD terms in array is %d",cntr_odd);
	printf("\nNo of EVEN terms in array is %d",noe-cntr_odd);
	return 0;
}
