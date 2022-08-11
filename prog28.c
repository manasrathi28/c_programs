// Accept the working hours of 5 employees from user & calculate the total overtime paid
// to them. Overtime rate is Rs. 20/- per hour, if the employee works for more than 8 hours
#include <stdio.h>

int main()
{
	int empno = 1, wkghrs, ovthrs, total = 0;  // always initialise to 0 for running total
	while (empno <= 5)
	{
		printf("Enter the working hours of emp no %d :- ",empno);
		scanf("%d",&wkghrs);
		ovthrs = wkghrs - 8;
		if (ovthrs > 0)
			total = total + ovthrs * 20;  // running total
		
		empno++;
	}
	printf("Total overtime paid to 5 employees is Rs. %d",total);
	return 0;
}
