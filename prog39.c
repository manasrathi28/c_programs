// Write a function to display your personal information
#include <stdio.h>

// function declaration
void my_info();

// execution of prog starts from main() only
int main()
{
	printf("My name is Sandeep Shevade");
	my_info();  // function call
	printf("\nThanks");
	my_info();  // function can be called numerous times
	return 0;
}

// function definition
void my_info()
{
	printf("\nI have done my engg from COEP");
	printf("\nI have my own comp trg center");
}
