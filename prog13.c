// accept 3 whole nos from user & display the largest no
// Alternative acceptable/feasible solution
#include <stdio.h>

int main()
{
	int no1, no2, no3, max;
	printf("Enter any 3 whole nos :- ");
	scanf("%d %d %d",&no1,&no2,&no3);
	max = no1;
	if (max < no2)
		max = no2;
		
	if (max < no3)
		max = no3;
	
	printf("Largest no is %d",max);
	return 0;	
}
