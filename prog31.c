// Accept the base & index from user & calculate the Power Value
#include <stdio.h>

int main()
{
	int base, index, i, pv = 1;  // running product
	printf("Enter the base & index :- ");
	scanf("%d %d",&base,&index);
	// multiply base with itself, index no of times
	for (i=1;i <= index;i++)
		pv = pv * base;
		
	printf("Power Value is %d",pv);
	return 0;
}
