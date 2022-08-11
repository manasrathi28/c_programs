// Accept any whole no from user & determine whether it is a Perfect No or not
// Perfect no is the one in which the sum of divisors of that no is the no itself
// eg no = 28, sum = 1 + 2 + 4 + 7 + 14 = 28. sum == no, true, 28 is Perfect No
//    no = 24, sum = 1 + 2 + 3 + 4 + 6 + 8 + 12 = 36, sum == no, false, 24 is Not Perfect No

#include<stdio.h>
int main()
{
	int no,temp,sum=0,i;
	printf("Enter a number:-");
	scanf("%d",&no);
	temp=no;
	for(i=1;i<=no/2;i++)
	{
		if (no%i==0)
			sum=sum+i;
	}
	if (sum==no)
		printf("Its a perfect number");
	else
		printf("Its not a perfect number");
		
	return 0;
}

