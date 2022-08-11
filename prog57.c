// write a function which accepts 2 int values from main() & calculates their sum, product,
// difference & quotient. Print the results from main()
#include <stdio.h>

// fn declaration
void calc(int,int,int *,int *,int *,float *);

int main()
{
	int no1, no2, sum, diff, prdt;
	float quot;
	printf("Enter 2 nos :- ");
	scanf("%d %d",&no1,&no2);
	calc(no1,no2,&sum,&diff,&prdt,&quot);  // Mixed Call
	printf("Sum = %d, Diff = %d, Prdt = %d, Quot = %.2f",sum,diff,prdt,quot);
	return 0;
}

void calc(int no1,int no2,int *ptr_sum,int *ptr_diff,int *ptr_prdt,float *ptr_quot)
{
	*ptr_sum = no1 + no2;
	*ptr_diff = no1 - no2;
	*ptr_prdt = no1 * no2;
	*ptr_quot = (float) no1 / no2;	// typecast is imp
}
