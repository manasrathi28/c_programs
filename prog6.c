// Write a program to swap the values in 2 variables but without using 3rd variable
#include <stdio.h>

int main()
{
	int no1, no2;  // observe there is no 3rd var "temp" like yesterday
	printf("Enter 2 nos :- ");
	scanf("%d %d",&no1,&no2);
	printf("Before swapping, no1 = %d and no2 = %d",no1,no2);
	// swapping procedure
	no1 = no1 + no2;
	no2 = no1 - no2;
	no1 = no1 - no2;
	printf("\nAfter swapping, no1 = %d and no2 = %d",no1,no2);
	return 0;
}
