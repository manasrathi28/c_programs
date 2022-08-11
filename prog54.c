// Write a function which increments the values of 2 int vars from main() by 2 different
// quantities say 3 & 5
// Process is known as "Call By Reference". Result achieved
#include <stdio.h>

// fn declaration
void incr(int *,int *);

int main()
{
	int a = 10, b = 20;
	printf("Before incr(), Values in vars a & b are %d and %d",a,b);
	incr(&a,&b);
	printf("\nAfter incr(), Values in vars a & b are %d and %d",a,b);
	return 0;
}

// fn defn
void incr(int *ptr_a,int *ptr_b) // ptr_a = &a, ptr_b = &b
{
	*ptr_a += 3;
	*ptr_b += 5;
}
