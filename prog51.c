// A Program to display the address of a variable in memory
#include <stdio.h>

int main()
{
	int i = 5;
	printf("Value in var i is %d",i);
	printf("\nAddress of var i in memory is %u",&i);  // "&" is called as "address of" operator
	return 0;
}
