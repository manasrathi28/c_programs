// An eg of Menu Driven Program
#include <stdio.h>
#include <stdlib.h>   // for exit(0) function

int main()
{
	int no, i, fv, flag, choice;
	// for the menu to be displayed on the screen continuously, use a loop
	while (1)
	{
		system("cls");   // to clear the screen before displaying menu each time
		printf("Menu Driven Program\n\n");
		printf("1. To determine whether the No is ODD/EVEN\n");
		printf("2. To determine whether the No is PRIME or NOT\n");
		printf("3. To determine the Factorial Value of given no\n");
		printf("4. Exit\n\n");
		printf("Enter your choice :- ");
		scanf("%d",&choice);
		// analyse the choice & proceed
		switch (choice)
		{
			case 1:
				printf("Enter the no :- ");
				scanf("%d",&no);
				if (no%2 == 0)
					printf("Given no is EVEN No");
				else
					printf("Given no is ODD No");
					
				break;
				
			case 2:
				printf("Enter the no :- ");
				scanf("%d",&no);
				flag = 1;
				for (i=2;i<=no/2;i++)
				{
					if (no % i == 0)
					{
						flag = 0;
						break;
					}				
				}				
				if (flag == 0)
					printf("Given no is Not a PRIME No");
				else
					printf("Given no is a PRIME No");
					
				break;
				
			case 3:
				printf("Enter the no :- ");
				scanf("%d",&no);
				fv = 1;
				for (i=2;i<=no;i++)
					fv *= i;
					
				printf("Factorial Value is %d",fv);
				break;
				
			case 4:
				exit(0);
			
			default:
				printf("Error in Choice, Try Again");
		}
		printf("\n");
		system("pause");  // to pause the o/p on screen before it is cleared		
	}
	return 0;
}
