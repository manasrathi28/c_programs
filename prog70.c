// To accept the string from user & display it's contents
// method - 1
#include <stdio.h>

int main()
{
	char fullname[30];  // the width should consider space for \0 i.e. 1 byte
	printf("Enter your fullname :- ");
	scanf("%s",fullname);  // remember name of array itself means address of array
							// So do not use "&" i.e. address of operator
	printf("Your fullname is %s",fullname);
	return 0;
}
// o/p
// Enter your fullname :- Sandeep Subhash Shevade
// Your fullname is Sandeep
// This is bcoz scanf() identifies the data of next var using space. So only firstname
// is accepted as data of var fullname
