// Accept the rate and qty of item from user & display the net amount payable.
// A discount of 10% is applicable if the user purchases more than 100 nos of that item
#include <stdio.h>

int main()
{
	int rate, qty, disc_per = 0, net_pay;  // here var disc_per is initialised to 0 to get rid
										// of garbage value which will be used in calculation
										// if no discount is to be offered
	printf("Enter the rate and qty of item :- ");
	scanf("%d %d",&rate,&qty);
	if (qty >= 100)
		disc_per = 10;
	//else
	//	disc_per = 0;
		
	printf("disc_per is %d",disc_per);  // to cross check
	net_pay = rate * qty - rate * qty * disc_per / 100;
	printf("\nNet Amount Payable is Rs. %d",net_pay);
	return 0;
}

