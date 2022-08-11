// accept the marks of 3 subjects from a student & determine the percent & class obtained
// Use logical operators
// logical operator && implies that conditions on either side of && operator have to be 
// satisfied
#include <stdio.h>

int main()
{
	int m1, m2, m3;
	float per;
	printf("Enter the marks of 3 subjects :- ");
	scanf("%d %d %d",&m1,&m2,&m3);
	per = (float) (m1+m2+m3) * 100 / 300;  // out of marks for each subject is 100
	printf("Percent is %.2f",per);
	printf("\nClass is ");
	if (per < 35)
		printf("Fail");
		
	if (per < 50)
		printf("Pass Class");
	
	if (per >= 50 && per < 60)
		printf("IInd Class");
	
	if (per >= 60 && per < 75)
		printf("Ist Class");
		
	if (per >= 75)
		printf("Distinction");
		
	return 0;	
}
// Note - Here compiler will read every "if" command. Pls check whether all nos are covered
// and no number lies in 2 "if ranges" simultaneously.
