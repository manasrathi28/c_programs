// Print all Prime Nos from 1 - n
#include <stdio.h>

int main()
{
	int no, end_no, i, flag;
	printf("Enter the end no :- ");
	scanf("%d",&end_no);
	printf("Prime Nos from 1 - %d are\n",end_no);
	// auto generate nos
	for (no=1;no <= end_no;no++)
	{
		if (no == 1)
			continue;
			
		flag = 1;  // imp to initialise here only bcoz every no which is generated in the
					// loop is assumed as prime & then tested whether prime or not
		// logic for determining whether no is prime
		for (i=2;i<=no/2;i++)
		{
			if (no % i == 0)
			{
				flag = 0;  
				break;    
			}
		}
		if (flag == 1)
			printf("%d ",no);
		// else not reqd bcoz if no is not prime, it is not to be displayed	
	}
	return 0;
}
