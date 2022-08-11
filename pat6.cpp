/* Pattern - 6

1
22
333
4444
55555

*/

#include<stdio.h>
int main()
{
	int no=1,c,r;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d",no);
		}
		no++;
		printf("\n");
	}
	return 0;
}