// accept 2 whole nos from user & write a program to swap these values
#include <stdio.h>

int main()
{
	int no1, no2, temp;
	printf("Enter 2 values :- ");
	scanf("%d %d",&no1,&no2);
	printf("Before swapping, no1 = %d and no2 = %d",no1,no2);
	// swapping procedure
	temp = no1;
	no1 = no2;
	no2 = temp;
	printf("\nAfter swapping, no1 = %d and no2 = %d",no1,no2);
	return 0;
}
