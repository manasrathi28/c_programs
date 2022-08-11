// WAP to read & display the records from a binary file
#include <stdio.h>

struct emp
{
	int empid;
	char name[10];
	float sal;
};

int main()
{
	struct emp e;
	FILE *fptr;
	fptr = fopen("recs.dat","rb");
	// validation can be included if reqd
	// we are not aware of how many records are there in the file
	while (1)
	{
		if (fread(&e,sizeof(e),1,fptr))  // as long as we demand 1 record to fetch from file
									// and fread() finds it, it returns 1 (true)
			printf("%d %s %.2f\n",e.empid,e.name,e.sal);
		else
			break;		
	}
	fclose(fptr);
	return 0;
}
