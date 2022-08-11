// Write a function which accepts an int array from main() & determines the largest & smallest
// nos from this array. Print the results from main()
#include <stdio.h>

// fn declaration
void fn(int [],int,int *,int *);

int main()
{
	int nos[] = {10,0,-900,178,35,124,90,-164,100}, max, min, noe;
	noe = sizeof(nos)/sizeof(int);
	fn(nos,noe,&max,&min);
	printf("Min no from nos[ ] is %d",min);
	printf("\nMax no from nos[ ] is %d",max);
	return 0;
}

void fn(int nos[ ],int noe,int *ptr_max,int *ptr_min)
{
	int i;
	*ptr_max = *ptr_min = nos[0];
	// now compare all elements one by one from 2nd position
	for (i=1;i<noe;i++)
	{
		if (*ptr_max < nos[i])
			*ptr_max = nos[i];
			
		if (*ptr_min > nos[i])
			*ptr_min = nos[i];
	}
}
