// c prog to call a macro from a header file
#include <stdio.h>  // absolute / fixed path
#include "macro.h"  // relative path

int main()
{
	printf("Enter the radius of circle :- ");
	scanf("%d",&r);
	ac = AREA(r);
	cc = CIRCUMFERENCE(r);
	d = 2 * r;
	printf("Diameter of circle is %d",d);
	printf("\nArea of circle is %.2f",ac);
	printf("\nCircumference of circle is %.2f",cc);
	return 0;
}
