// an eg of pre & post increment operators
#include <stdio.h>

int main()
{
	int a = 10, b, c = 10, d;
	// stop writing
	b = ++a;  // pre increment
    //2  1	  <-- priority while evaluating above expression
    printf("Value of a is %d and b is %d",a,b);  // a = 11, b = 11
    d = c++;  // post increment
    //1  2    <-- priority while evaluating above expression
    printf("\nValue of c is %d and d is %d",c,d);  // c = 11, d = 10
    return 0;
}
