// egs of compound assignment operators
#include <stdio.h>

int main()
{
	int a = 10;
	printf("Before modification, a contains %d",a);  // 10
	a += 5;  // same as  a = a + 5;
	printf("\nAfter incrementing a with 5, a contains %d",a);  // 15
	a /= 3;  // same as a = a / 3;
	printf("\nAfter dividing a with 3, a contains %d",a);  // 5
	return 0;
}
