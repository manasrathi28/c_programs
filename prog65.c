// Accept TWO 2 x 2 matrices of whole nos from user & display the added matrix
// Logic - 2 matrices can be added only if they are of same order.
// For defining matrices of a particular order, base is 1. However to refer to the position 
// of elements from matrix, the base is 0.
#include <stdio.h>

int main()
{
	int a[2][2], b[2][2], t[2][2], r, c;
	printf("Enter matrix a\n");
	for (r=0;r<2;r++)
	{
		for (c=0;c<2;c++)
		{
			printf("Element %d%d :- ",r,c);
			scanf("%d",&a[r][c]);
		}
	}
	printf("Enter matrix b\n");
	for (r=0;r<2;r++)
	{
		for (c=0;c<2;c++)
		{
			printf("Element %d%d :- ",r,c);
			scanf("%d",&b[r][c]);
			t[r][c] = a[r][c] + b[r][c];  // add the corresponding elements of matrices
											// a & b
		}
	}
	system("cls");  // to clear the i/p of a & b matrices
	printf("Added matrix is\n");
	for (r=0;r<2;r++)
	{
		for (c=0;c<2;c++)
			printf("%d\t",t[r][c]);  // elements of row are printed side by side
	
		printf("\n");
	}
	return 0;	
}
