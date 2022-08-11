// Write a function to change the contents of a structure variable
// Process is known as "Call By Reference". Result achieved
#include <stdio.h>

typedef struct
{
	int bookid;
	char title[20];
	float price;	
} BOOK;

// fn declaration
void modify(BOOK *);

int main()
{
	// self initialised struct var
	BOOK b = {123,"C Language",655.75};
	printf("Before modification, b contains\n");
	printf("Bookid - %d, Name - %s, Price - %.2f",b.bookid,b.title,b.price);
	modify(&b);
	printf("\n\nAfter modification, b contains\n");
	printf("Bookid - %d, Name - %s, Price - %.2f",b.bookid,b.title,b.price);
	return 0;	
}

void modify(BOOK *ptr_b)
{
	ptr_b->bookid = 234;  // error, with pointer to structure, we should not use . operator to
						// refer to it's members but -> operator 
	ptr_b->price = 1000.00;
}
