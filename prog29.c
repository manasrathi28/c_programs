// accept a no from user & display it's table upto multiples of 12
#include <stdio.h>

int main()
{
	int no, i;
	printf("Enter the no :- ");
	scanf("%d",&no);
	printf("Table of no %d is\n",no);
	for (i=1;i<=12;i++)
		printf("%d x %d = %d\n",no,i,no*i);
		
	return 0;	
}
