// WAP to multiply or take product of 2 given matrices & display the resultant matrix
// 2 matrices can be multiplied only if the no of columns of 1st matrix is equal to no of
// rows of 2nd matrix. The resultant matrix will have no of rows of 1st matrix & no of columns
// of 2nd matrix.
#include <stdio.h>
#include <stdlib.h>     // for exit(0) fn

int main()
{
	int a[50][50], b[50][50], p[50][50], r, c, k, sum, nor1, noc1, nor2, noc2;
	printf("Enter the no of rows & columns for matrix 1 :- ");
	scanf("%d %d",&nor1,&noc1);
	printf("Enter the no of rows & columns for matrix 2 :- ");
	scanf("%d %d",&nor2,&noc2);
	if (noc1 != nor2)
	{
		printf("Cannot multiply the matrices");
		exit(0);
	}
	printf("Enter the elements for matrix 1\n");
	for (r=0;r<nor1;r++)
	{
		printf("Enter %d no of elements for row no %d :- ",noc1,r+1);
		for (c=0;c<noc1;c++)
			scanf("%d",&a[r][c]);
	}
	printf("Enter the elements for matrix 2\n");
	for (r=0;r<nor2;r++)
	{
		printf("Enter %d no of elements for row no %d :- ",noc2,r+1);
		for (c=0;c<noc2;c++)
			scanf("%d",&b[r][c]);
	}
	system("cls");
	// take the product
	for (r=0;r<nor1;r++)
	{
		for (c=0;c<noc2;c++)
		{
			sum = 0;
			for (k=0;k<noc1;k++)
				sum += a[r][k] * b[k][c];
				
			p[r][c] = sum;
		}
	}
	printf("Product matrix is\n");
	for (r=0;r<nor1;r++)
	{
		for (c=0;c<noc2;c++)
			printf("%d\t",p[r][c]);
			
		printf("\n");
	}
	return 0;
}
