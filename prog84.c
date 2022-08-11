// eg of macro expansion
// this macro saves a lot of efforts of developer & also increases the readability of code
#include <stdio.h>
#define AND &&    // Text AND to be replaced by operator && before sending code for compilation
#define OR ||
#define DISPLAY printf("C is very interesting!!!");  // macros do not terminate with ;
									// but as printf() requires ; at the end, it is written so..
									
int main()
{
	int a = 10, b = 20, c = 30;
	if ((a > 10 AND b < 20) OR c > 25)	
		DISPLAY
	
	return 0;
}
