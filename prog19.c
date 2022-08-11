// Calculate the charges of sending a parcel by courier company. The charges for 1st 1000 gms
// is Rs. 30/-. For every 500 gm & thereof, charges are Rs. 20/-

// eg. wt = 700 gm, Rs. 30/-
// eg wt = 1200 gm, Rs. 50/- (1200 ==> 1000 (30) + 200 (20))
// eg wt = 3005 gm, Rs. 130/- (3005 ==> 1000  (30) + 500 * 4 (80) + 5 (20) = 130
#include <stdio.h>

int main()
{
	int wt_gms, charges;
	printf("Enter the weight of parcel in gms :- ");
	scanf("%d",&wt_gms);
	if (wt_gms <= 1000)
		charges = 30;
	else // wt_gms is > 1000
	{
		wt_gms = wt_gms - 1000;
		// check whether the remaining wt_gms is a multiple of 500?
		if (wt_gms % 500 == 0)
			charges = 30 + wt_gms/500 * 20;
		else
			charges = 30 + wt_gms/500 * 20 + 20;  // last 20 charges for remainder wt_gms
													// even though it is < 500 gm		
	}
	printf("Charges are Rs. %d",charges);
	return 0;
}
