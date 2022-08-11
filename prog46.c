// eg-2 on scope of variables
// Define a function "modify()" to update the value of a variable from main()
// Result achieved
#include <stdio.h>

// fn declaration
int modify(int);

int main()
{
	int c = 10;
	printf("Before modify(), c = %d",c);  // 10
	c = modify(c);
	printf("\nAfter modify(), c = %d",c);  // 10
	return 0;
}

int modify(int x)  // c & x variables are different
{
	x += 5;
	return x;  // c of main() = x of modify()
}
