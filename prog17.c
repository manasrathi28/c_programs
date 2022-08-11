// Accept a character from user & determine it's category i.e. whether it is a capital or
// small letter, digit or a symbol
// There are a total of 256 characters available on keyboard which can be uniquely identfied
// using a special no called as ASCII no. ASCII stands for American Std Code for Information
// & Interchange. It is as follows
// Category					ASCII Range
// A - Z					65 - 90
// a - z					97 - 122
// 0 - 9					48 - 57
// Symbols/special chars	0-47/58-64/91-96/123-255
// To get ascii value of any character, simply assign the char var to int var
#include <stdio.h>

int main()
{
	char ch;
	int no;
	printf("Enter a character :- ");
	scanf("%c",&ch);
	no = (int)ch;  // here typecast is optional
	//printf("ASCII Code of %c is %d\n",ch,no);  // optional
	if (no >= 65 && no <= 90)
		printf("Capital Letter");		
	else if (no >= 97 && no <= 122)
		printf("Small Letter");		
	else if (no >= 48 && no <= 57)
		printf("Digit");		
	else  // saves the efforts of dealing with last range shown above
		printf("Symbol");
		
	return 0;
}
