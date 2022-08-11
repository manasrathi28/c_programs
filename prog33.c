// Accept a whole no from user & determine whether it is an Armstrong no or not
// Armstrong no is the one in which the sum of cubes of individual digits is the no itself
// eg no = 100, sum = 1^3 + 0^3 + 0^3 = 1 + 0 + 0 = 1, no != sum, So 100 is not Armstrong no
// no = 153, sum = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153, no == sum, So 153 is Armstrong no
// Other Armstrong nos are 0, 1, 370, 371, 407 from 1-500
#include <stdio.h>

int main()
{
	int no, temp, sum = 0;  // running total, so initialise sum to 0
							// var temp to keep var no intact
	printf("Enter the no :- ");
	scanf("%d",&no);
	temp = no;  // imp, assign value of no to temp after accepting no from user
	// extracting every digit of no
	while (temp != 0)
	{
		sum += (temp%10) * (temp%10) * (temp%10);  // brackets for evaluating % before *
		temp /= 10;
	}
	if (no == sum)
		printf("Given no %d is armstrong no",no);
	else
		printf("Given no %d is not armstrong no",no);
		
	return 0;	
}

