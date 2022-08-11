// Write a recursive function to determine the factorial value of given no
#include <stdio.h>

// fn declaration
int calcfv(int);

int main()
{
	int no, fv;
	printf("Enter the no :- ");
	scanf("%d",&no);
	fv = calcfv(no);
	printf("Factorial value of no %d is %d",no,fv);
	return 0;
}

// fn defn
int calcfv(int x)
{
	int y;
	if (x == 1)
		return 1;  // factorial value of 1 is 1
	
	y = x * calcfv(x-1);  // recursive call
	return y;  // fv of main() = y of calcfv()
}
