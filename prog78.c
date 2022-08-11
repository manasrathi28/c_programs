// accept a string from user & convert all capital letters to small letters & vice a versa
// Also convert digits to digit 9 & special chars to char $, except space
#include <stdio.h>

int main()
{
	char sent[40], ch;
	int i;
	printf("Enter the text :- ");
	gets(sent);
	for (i=0;sent[i] != '\0';i++)
	{
		ch = sent[i];
		// chars are actually represented as nos i.e. ascii codes
		if (ch >= 65 && ch <= 90)
			ch += 32;    // bcoz ascii codes of caps is 65 to 90 & of small is 97 to 122
							// i.e. difference is 32
		else if (ch >= 97 && ch <= 122)
			ch -= 32;
		else if (ch >= 48 && ch <= 57)  // digits
			ch = '9'; // ch = 57 also OK
		else if (ch != ' ')  
			ch = '$';
		
		// now copy the converted char in sent[ ]
		sent[i] = ch;		
	}
	printf("Converted sentence is %s",sent);
	return 0;	
}
