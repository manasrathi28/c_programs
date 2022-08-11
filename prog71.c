// To accept the string from user & display it's contents
// method - 2
#include <stdio.h>

int main()
{
	char fullname[30];  
	printf("Enter your fullname :- ");
	gets(fullname);  // gets() means get string from user.
					  // Why no format specifier like scanf()? gets() was designed only for
					// accepting strings whereas scanf() is a more versatile fn & can be used
					// to accept data for any datatype & hence requires format specifiers to
					// represent the accepted data in correct format
	//printf("Your fullname is %s",fullname);
	//puts("Your fullname is %s",fullname) // error, puts() also like gets() doesn't accept
					// specifier. However we are going to print 2 types of strings here.
					// 1. string literal / constant  2. string variable
	puts("Your fullname is ");
	puts(fullname);  // already has \n in front
	return 0;
}
// o/p
// Enter your fullname :- Sandeep Subhash Shevade
// Your fullname is
// Sandeep Subhash Shevade
// Conclusion - Combination of gets() & printf() is more popular
