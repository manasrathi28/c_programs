// an eg of "typedef" command which is used to rename a datatype. Normally used with structures
// to avoid using "struct" keyword again & again while defining struct vars or arrays
#include <stdio.h>

// syntax - 1
struct book
{
	int bookid;
	char title[20], author[20];
	float price;
};

typedef struct book BOOK;   // rename structure book as BOOK
typedef long unsigned int LUI;  // rename built in datatype "long unsigned int" as "LUI"

// syntax - 2, More popular
typedef struct
{
	int empid;
	char name[10];
	float sal;
} EMP;      // rename structure as EMP

int main()
{
	BOOK b;
	LUI no;
	EMP arr[3];  // no need to use "struct" keyword each time
	return 0;
}

