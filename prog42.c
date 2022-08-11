// Write a function which accepts 3 int values (nos) from main() & returns their sum
#include <stdio.h>

// fn declaration
int calcsum(int,int,int);  // do not assign name for args (not compulsory)

int main()
{
	int a, b, c, sum;
	printf("Enter 3 nos :- ");
	scanf("%d %d %d",&a,&b,&c);
	sum = calcsum(a,b,c);  // passing arguments to the function. Need to be passed bcoz vars
						// declared in 1 function are not accessible to the code of other fn.
					// these arguments (vars) from calling fn are known as "actual arguments"
	printf("Sum of given 3 nos is %d",sum);
	return 0;
}

// fn definition
//int calcsum(int x,int y,int z) // formal args. It's a good habit to have different name for
									// formal args
int calcsum(x,y,z)  // K & R syntax
int x,y,z;
{
	//sum = a + b + c;  // undeclared vars sum, a, b, c
	int s;
	s = x + y + z;
	return s;  // return statement terminates the function and passes value of s to var sum
			// sum of main() = s of calcsum()
}

