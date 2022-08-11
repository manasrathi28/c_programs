// To accept the marks of 5 students in a particular subject & display average marks
#include <stdio.h>

int main()
{
	int marks[5], i, total = 0;   // running total of marks
	float avg;
	printf("Enter the marks\n");
	for (i=0;i<5;i++)
	{
		printf("Enter the marks of student no %d :- ",i+1);
		scanf("%d",&marks[i]);
	}
	for (i=0;i<5;i++)
		total += marks[i];
		
	avg = (float) total / 5;
	printf("Average marks of 5 students is %.2f",avg);
	return 0;	
}
