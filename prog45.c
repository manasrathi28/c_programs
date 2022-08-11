// eg-2 on scope of variables
// Define a function "modify()" to update the value of a variable from main()
// Result not achieved
#include <stdio.h>

// fn declaration
void modify(int);

int main()
{
	int c = 10;
	printf("Before modify(), c = %d",c);  // 10
	modify(c);
	printf("\nAfter modify(), c = %d",c);  // 10
	return 0;
}

void modify(int c)  // New Local var "c" gets created in scope of modify()
{
	c += 5;
	printf("\nIn modify(), c = %d",c);  // 15
}
