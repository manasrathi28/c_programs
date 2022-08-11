// WAP to read & display the records from a text file
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
	fptr = fopen("recs.txt","r");
	// validation can be included if reqd
	// we are not aware of how many records are there in the file
	while (1)
	{
		if (fscanf(fptr,"%d %s %f",&e.empid,e.name,&e.sal) != EOF)
			printf("%d %s %.2f\n",e.empid,e.name,e.sal);
		else
			break;		
	}
	fclose(fptr);
	return 0;
}
