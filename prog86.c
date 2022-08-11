// an eg of conditional compilation & miscellenous directives
#include <stdio.h>
//#define DISCOUNT  // Only macro definition but no expansion
#undef DISCOUNT   // undefine macro DISCOUNT. This is better option than deleting the macro
					// defintion, if macro is not reqd

int main()
{
	int rate, qty, disc_per, disc_amt, total;
	printf("Enter the rate & qty of item :- ");
	scanf("%d %d",&rate,&qty);
	#ifdef DISCOUNT
		printf("Enter the discount percent :- ");  
		scanf("%d",&disc_per);
		disc_amt = rate * qty * disc_per / 100;
		printf("Gross Total Rs. %d",rate*qty);
		printf("\nLess Discount Rs. %d",disc_amt);
		total = rate * qty - disc_amt;
		printf("\nNet Amount Payable Rs. %d",total);
	#else
		total = rate * qty;
		printf("Net Amount Payable Rs. %d",total);
	#endif
	return 0;
}



