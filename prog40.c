//an eg of a C prog which includes a user defined project specific header file with a function/s
#include <stdio.h> // < > indicates absolute (fixed) path of header file & is available in
				// the same path where Dev C++ compiler is installed in HD
//#include <info.h> // Error, file info.h not found
#include "info.h"   // " " indicates relative path i.e. the header file is existing in the
				// same path as current executing program

int main()
{
	printf("My name is Sandeep Shevade");
	my_info();
	printf("\nThanks");
	return 0;
}
