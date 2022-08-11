// Write a function to swap the values from 2 int vars of main()
#include <stdio.h>

// fn declaration
void swapr(int *,int *);

int main()
{
	int a = 10, b = 20;
	printf("Before swapping, a = %d and b = %d",a,b);
	swapr(&a,&b);
	printf("\nAfter swapping, a = %d and b = %d",a,b);
	return 0;
}

void swapr(int *ptr_a,int *ptr_b)
{
	int temp;  // local var
	temp = *ptr_a;
	*ptr_a = *ptr_b;
	*ptr_b = temp;
}
