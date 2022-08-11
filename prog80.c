// to accept username & determine whether he is a member or not. If not, we will not permit
// him to use our prog
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char members[5][10] = {"manas","om","nihar","abhiram","ajay"}, username[10];	
	int i, flag = 0; // pessimistic approach i.e. user is not a member. If we come accross
					// user in member list, we will assign 1 to flag var
	printf("Enter username :- ");
	gets(username);
	for (i=0;i<5;i++)
	{
		//if (username == member[i]) // error, we cannot use operators with derived types
		if (strcmp(username,members[i]) == 0)
		{
			flag = 1;
			break;  // terminate the search
		}
	}
	if (!flag)  // if (flag == 0)
	{
		printf("Username %s not our Member",username);
		printf("\nProgram terminates now....");
		exit(0);
	}
	printf("Welcome member %s to our menu driven program",username);
	printf("\nMenu Driven Prog follows.....");
	return 0;
}
