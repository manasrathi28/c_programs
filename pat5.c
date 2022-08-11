/* pattern - 5

1
12
123
1234
12345

*/

#include<stdio.h>
int main()
{
	int no=1,r,c;
	for (r=1;r<=5;r++)
	{
		no=1;
		for(c=1;c<=r;c++)
		{
			printf("%d",no);
			no++;
		}
		printf("\n");
	}
	return 0;
}
