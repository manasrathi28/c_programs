// An eg of nested structure
#include <stdio.h>
#include "address.h"

struct relative
{
	char name[10];
	struct adr a;
	char relation[15];
};

int main()
{
	struct relative r = {"prakash","12, Aboli apts,Thane",401456,"9822012345","cousin brother"};
	printf("Info of my relative is\n");
	printf("Name - %s",r.name);
	printf("\nRelation - %s",r.relation);
	printf("\nAddress - %s",r.a.adr);  // syntax is main structure.sub structure.member
	printf("\nPin - %d",r.a.pin);
	printf("\nMobile no - %s",r.a.mobile_no);
	return 0;
}
