// Accept any word from user & determine whether it is a palindrome or not
// IMP - Do not use library fn strrev() to create the reverse of string & compare
#include <stdlib.h>

int main()
{
	char word[20];
	int i, j, flag = 1;  // optimistic approach which says that assume that given word is
							// a palindrome
	printf("Enter a word :- ");
	gets(word);
	// position i on 1st char & j on last char
	i = 0;
	for (j=0;word[j+1] != '\0';j++);    // Notice the ; after "for" loop which says that no
										// code is to be executed using "for" loop
	// now compare the characters at extreme end points
	while (i < j)						
	{
		if (word[i] != word[j])
		{
			flag = 0;
			break;
		}	
		i++;
		j--;
	}
	if (flag)  // if (flag == 1)
		printf("Given word is a palindrome");
	else
		printf("Given word is not a palindrome");
	
	return 0;
}
