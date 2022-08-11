// write a function which returns the quotient of 2 int values from main()
#include <stdio.h>

// fn decl
float calcquot(int,int);

int main()
{
	int no1, no2;
	float quot;
	printf("Enter the numerator & denominator :- ");
	scanf("%d %d",&no1,&no2);
	quot = calcquot(no1,no2);
	printf("Quotient is %.2f",quot);
	return 0;
}

// fn definition - the result determines the return type of function
float calcquot(int n,int d)
{
	return (float) n / d;   // shortcut
}
