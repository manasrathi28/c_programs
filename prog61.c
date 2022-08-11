// Sorting the elements of a numeric array
// QN is what changes will you do in this program, if Elements are reqd in DESC order?
// 5 mins....
#include <stdio.h>

int main()
{
	int nos[50], i, j, noe, temp;  // temp var for swapping
	printf("Enter the no of elements to sort :- ");
	scanf("%d",&noe);
	printf("Enter the elements :- ");
	for (i=0;i<noe;i++)
		scanf("%d",&nos[i]);
		
	system("cls");
	printf("Before sorting, elements of nos[ ] are\n");
	for (i=0;i<noe;i++)
		printf("%d ",nos[i]);
		
	// sorting procedure
	for (i=1;i<noe;i++)
	{
		// comparison loop
		for (j=0;j<noe-i;j++)
		{
			if (nos[j] > nos[j+1])
			{
				temp = nos[j];
				nos[j] = nos[j+1];
				nos[j+1] = temp;
			}
		}		
	}	
	printf("\n\nAfter sorting, elements of nos[ ] are\n");
	for (i=0;i<noe;i++)
		printf("%d ",nos[i]);
		
	return 0;	
}
