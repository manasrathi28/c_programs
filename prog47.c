// Write a function which displays the no. of times it was called/invoked by main()
#include <stdio.h>

// fn declaration
void fn();

int main()
{
	fn();
	fn();
	// cntr++;  // error, local var "cntr" of fn() cannot be modified if attempt is made
				// to accidentally modify it.
	fn();
	return 0;
}

void fn()
{
	static int cntr = 1;  // scope is local but life is global
	printf("\nNo of times fn() is called is %d",cntr);
	cntr++;
}
