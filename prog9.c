// Accept a 4 digit +ve whole no (integer) from user & determine whether the given no
// & it's reverse no are same or not (palindrome - either way value of no is same)
// eg no = 1221 (palindrome), 5454 (Not palindrome)
// no = 6532, d1=6, d2=5, d3=3, d4=2, revno = 2356 = 2000 + 300 + 50 + 6
#include <stdio.h>

int main()
{
	int no, revno, d1, d2, d3, d4;
	printf("Enter a 4 digit +ve whole no :- ");
	scanf("%d",&no);
	// to extract individual digits from no
	d1 = no / 1000;
	d2 = no / 100 % 10;
	d3 = no / 10 % 10;
	d4 = no % 10;
	// arithmetical expression, multiply by place value
	revno = d4 * 1000 + d3 * 100 + d2 * 10 + d1;
	if (no == revno)  // == comparison operator
		printf("Given no is a palindrome");
	else
		printf("Given no is not a palindrome");
	
	return 0;
}
