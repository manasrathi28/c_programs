// Write a function which accepts the radius of circle from main() & calculates it's diameter,
// area & circumference. Print the results from main()
#include <stdio.h>

// fn declaration
void calc_dac(int,int *,float *,float *);

int main()
{
	int r, d;
	float ac, cc;
	printf("Enter the radius of circle :- ");
	scanf("%d",&r);
	calc_dac(r,&d,&ac,&cc);  // Mixed Call - Call By Value + Call By Reference
							// Logic is pass the value of var which is used to perform
							// calculation only whereas pass address of vars which need
							// their results from another fn
	printf("Diameter - %d, Area - %.2f, Circumference - %.2f",d,ac,cc);
	return 0;
}

void calc_dac(int r,int *ptr_d,float *ptr_ac,float *ptr_cc)
{
	*ptr_d = 2 * r;  // here * operator is used in 2 context 
					// 1. to take product (RHS)  2. Value at address operator (LHS)
	*ptr_ac = 3.14 * r * r;
	*ptr_cc = 2 * 3.14 * r;					
}
