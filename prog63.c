// Different techniques to print the elements of an array
#include <stdio.h>

int main()
{
	// don't write....
	float nos[ ] = {10.20,89.44,-100.01,76.46,17.78}, *ptr;
	int i;
	ptr = nos;  // same as ptr = &nos[0]; If we equate name of an array to a pointer var, we
				// get it's base address i.e. address of 0th element
	printf("Address\tValues\n");
	for (i=0;i<5;i++)
	{
		printf("%u - %.2f %.2f %.2f %.2f\n",ptr,nos[i],i[nos],*ptr,*(nos+i));
		ptr++;   // when pointer var is incremented, it automatically points to the next
				// value of same type
	}
	return 0;
}
