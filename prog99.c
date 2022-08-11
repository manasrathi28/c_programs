// accept a few records of employees from user & store them in a file
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
	int i, nor;
	FILE *fptr;
	printf("Enter the no of records :- ");
	scanf("%d",&nor);
	fptr = fopen("recs.txt","a"); // append mode can also create a file if it doesn't exist
	for (i=0;i<nor;i++)
	{
		printf("Enter the empid, name & salary :- ");
		scanf("%d %s %f",&e.empid,e.name,&e.sal);
		// write the record to the file
		fprintf(fptr,"%d %s %.2f\n",e.empid,e.name,e.sal); // syntax is same as printf() with
								// additional parameter in front i.e. the filename in which
								// we want to write		
	}
	fclose(fptr);
	printf("Records stored successfully to the file");
	return 0;	
}
