// an eg of self initialised struct var
#include <stdio.h>

struct book
{
	int bookid;
	char title[20], author[20];
	float price;
};

int main()
{
	struct book b = {13,"C Language","Y Kanetkar",670.85};  // imp to maintain the sequence
											// in which members are defined in structure
	printf("Bookid - %d",b.bookid);
	printf("\nPrice - %.2f",b.price);  // for printing, any sequence will do
	printf("\nAuthor - %s",b.author);
	printf("\nBookname - %s",b.title);
	return 0;
}
