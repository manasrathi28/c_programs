// accept the records of say 3 employees & display their details
#include <stdio.h>

// imp - always declare the structures globally, so that they are accessible to all fns
struct emp
{
	int empid;
	char name[10];
	float sal;
};

int main()
{
	struct emp arr[3];
	int i;
	for (i=0;i<3;i++)
	{
		printf("Enter the empid, name & salary of emp no %d :- ",i+1);
		scanf("%d %s %f",&arr[i].empid,arr[i].name,&arr[i].sal);  // as "name" here is an array
									// of chars i.e. string, no need to use "&" bcoz name of
									// array itself indicates address of array
	}
	printf("Details of 3 emps is\n");
	for (i=0;i<3;i++)
		printf("%d %s %.2f\n",arr[i].empid,arr[i].name,arr[i].sal);
		
	return 0;	
}
