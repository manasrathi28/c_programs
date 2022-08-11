// Accept a no from user & display it's factorial value
#include <stdio.h>

int main()
{
	int no, i, fv = 1;  // logic is a. running product, initialise var to 1
						//          b. fact(no) = no * fact(no-1) where fact(1) is 1
	printf("Enter the no :- ");
	scanf("%d",&no);
	for (i=2;i<=no;++i)
	//for (i=no;i >= 2;--i)
		fv = i * fv;     // fv *= i;    compound assignment operator
		
	printf("FV of no %d is %d",no,fv);
	return 0;
}
