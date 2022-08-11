// accept a few records of employees from user & store them in a file using binary mode
#include <stdio.h>
// Prog similar to Prog99.c with foll changes
struct emp
{
	int empid;	
	char name[10];  
	float sal;		
};   

int main()
{
	struct emp e;
	int i, nor;
	FILE *fptr;
	printf("Enter the no of records :- ");
	scanf("%d",&nor);
	fptr = fopen("recs.dat","ab"); // append in binary mode. Default is "a" OR "at" i.e. 
									// text mode. For binary files avoid "txt" extension
									// bcoz it will mislead others to view the data in a
									// text editor like Notepad & nothing is readable.
									// So "dat" means secured data file
	for (i=0;i<nor;i++)
	{
		printf("Enter the empid, name & salary :- ");
		scanf("%d %s %f",&e.empid,e.name,&e.sal);
		// write the record to the file
		fwrite(&e,sizeof(e),1,fptr);	
	}
	fclose(fptr);
	printf("Records stored successfully to the file");
	return 0;	
}
