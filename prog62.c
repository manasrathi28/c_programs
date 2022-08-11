// Write a function to increment the value of each element of given array by say 2
#include <stdio.h>

// fn declaration
void incr(int []);

int main()
{
	int nos[] = {10,20,30,40,50}, i;
	printf("Before incr(), nos[] contains\n");
	for (i=0;i<5;i++)
		printf("%d ",nos[i]);
		
	incr(nos);
	
	printf("\nAfter incr(), nos[] contains\n");
	for (i=0;i<5;i++)
		printf("%d ",nos[i]);
		
	return 0;
}

void incr(int x[])  // x[] is known as an alias of nos[] i.e. any change made using reference
					// of x[ ] will be seen in nos[ ]. 
{
	int i;
	for (i=0;i<5;i++)
		x[i] += 2;
}
