// Accept a month_no from user & display the no of days in that month
#include <stdio.h>

int main()
{
	int month_no, year_no, no_days = 31;  // bcoz most of the months contain 31 days
	error:  // label - a position in a program which can be referred using goto command
		printf("Enter the month no (1-12) :- ");
		scanf("%d",&month_no);
		// validation, rejection first
		if (month_no < 1 || month_no > 12)
		{
			printf("Invalid Month, try again....\n");
			goto error;  // to send the control of program to a specific location
		}
	if (month_no == 4 || month_no == 6 || month_no == 9 || month_no == 11)
		no_days = 30;
	else if (month_no == 2)
	{
		printf("Enter the year :- ");
		scanf("%d",&year_no);
		// short defn with no special check for start of century
		if (year_no % 4 == 0)
			no_days = 29;
		else
			no_days = 28;
	}
	printf("No of days in month %d are %d",month_no,no_days);
	return 0;
}
