// Accept a 4 digit +ve whole no (integer) from user & display the sum of all it's digits
// For eg if no is 5794, display it's sum i.e. 25
#include <stdio.h>

int main()
{
	int no, sum, d1, d2, d3, d4;
	printf("Enter a 4 digit +ve whole no :- ");
	scanf("%d",&no);
	// to extract individual digits from no
	d1 = no / 1000;
	d2 = no / 100 % 10;
	d3 = no / 10 % 10;
	d4 = no % 10;
	// arithmetical expression
	sum = d1 + d2 + d3 + d4;
	printf("Sum of digits of given no is %d",sum);
	return 0;
}
