// Write a recursive function to accept a whole no from user & return the sum of all it's 
// digits
#include <stdio.h>

// fn declaration
int calcsum(int);

int main()
{
	int no, sum;
	printf("Enter the no :- ");
	scanf("%d",&no);
	sum = calcsum(no);
	printf("Sum of digits of given no is %d",sum);
	return 0;
}

// fn defn
int calcsum(int x)
{
	int y;
	if (x < 10)  // single digit no
		return x;  // the sum of single digit no is same no
	
	y = x%10 + calcsum(x/10);
	return y;  // sum of main() = y of calcsum()
}
