// Accept a 3 x 3 matrix of int values from user & display it along with it's transpose below
#include <stdio.h>

int main()
{
	int a[3][3], r, c;
	printf("Enter the elements\n");
	for (r=0;r<3;r++)
	{
		printf("Enter 3 elements for row no %d :- ",r+1);
		for (c=0;c<3;c++)
			scanf("%d",&a[r][c]);
	}
	system("cls");
	printf("Given matrix is\n");
	for (r=0;r<3;r++)
	{
		for (c=0;c<3;c++)
			printf("%d\t",a[r][c]);
			
		printf("\n");
	}
	printf("Transpose of given matrix is\n");
	for (c=0;c<3;c++)
	{
		for (r=0;r<3;r++)
			printf("%d\t",a[r][c]);
			
		printf("\n");
	}
	return 0;
}
