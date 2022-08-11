// Accept a matrix of integers with size m x n & display it along with row & column totals
#include <stdio.h>

int main()
{
	int nos[50][50], m, n, r, c, sum;  // m-no of rows, n-no of cols
	printf("Enter the no of rows & columns :- ");
	scanf("%d %d",&m,&n);
	printf("Enter the elements\n");
	for (r=0;r<m;r++)
	{
		printf("Enter %d no of elements for row no %d :- ",n,r+1);
		for (c=0;c<n;c++)
			scanf("%d",&nos[r][c]);
	}
	system("cls");
	for (r=0;r<m;r++)
	{
		sum = 0;  // running total
		for (c=0;c<n;c++)
		{
			printf("%d\t",nos[r][c]);
			sum += nos[r][c];
		}
		printf("%d\n",sum);  // print the row total at the end of row
	}
	// to print the column totals at the bottom of the column
	for (c=0;c<n;c++)
	{
		sum = 0;
		for (r=0;r<m;r++)
			sum += nos[r][c];
			
		printf("%d\t",sum);
	}
	return 0;
}
