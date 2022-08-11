// Accept the marital status, age and gender of driver & determine whether he/she should
// be insured or not. Conditions for insuring are
// 1. The driver must be married
// 2. If unmarried male driver, age >= 30 years
// 3. If unmarried female driver, age >= 25 years
#include <stdio.h>

int main()
{
	char ms, gender;   // ms means marital_status i.e. M - Married U - Unmarried
	int age;
	printf("Enter the marital status, age and gender of driver :- ");
	scanf("%c %d %c",&ms,&age,&gender);
	if (ms == 'm' || ms == 'M')
		printf("The driver should be insured");
	else  // unmarried drivers
	{
		if (gender == 'm' || gender == 'M')
		{
			if (age >= 30)
				printf("The driver should be insured");
			else  // unmarried male driver with age < 30 years
				printf("The driver should not be insured");
		}
		else // female unmarried drivers
		{
			if (age >= 25)
				printf("The driver should be insured");
			else  // unmarried female driver with age < 25 years
				printf("The driver should not be insured");	
		}		
	}
	return 0;	
}
