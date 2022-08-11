// Accept the data of students from user like rollno, name & percent scored. Sort & display
// the data of students in DESC order by percent & if 2 or more students secure same percent,
// rearrange those records in ASC order by name
#include <stdio.h>
#include <string.h>  // for strcmp()

struct Student
{
	int rollno;
	char name[10];
	float per;
};

int main()
{
	struct Student recs[6], temp;  // to swap entire record
	int i, j;
	printf("Accept the data of students\n");
	for (i=0;i<6;i++)
	{
		printf("Enter the rollno, name & percent of student no %d :- ",i+1);
		scanf("%d %s %f",&recs[i].rollno,recs[i].name,&recs[i].per);
	}
	system("cls");
	printf("Before sorting, records of students are\n");
	for (i=0;i<6;i++)
		printf("%d %s %.2f\n",recs[i].rollno,recs[i].name,recs[i].per);
		
	// sorting procedure
	for (i=1;i<6;i++)
	{
		// comparison loop
		for (j=0;j<6-i;j++)
		{
			if (recs[j].per < recs[j+1].per)
			{
				temp = recs[j];
				recs[j] = recs[j+1];
				recs[j+1] = temp;
			}
			else if (recs[j].per == recs[j+1].per)
			{
				// strings cannot be compared using ==, >, <, etc operators as they are arrays
				if (strcmp(recs[j].name,recs[j+1].name) > 0)
				{
					temp = recs[j];
					recs[j] = recs[j+1];
					recs[j+1] = temp;
				}
			}
			// 3rd case we need not write i.e. if per of previous > per of next
		} // end of j loop
	} // end of i loop
	printf("\n\nAfter sorting, records of students are\n");
	for (i=0;i<6;i++)
		printf("%d %s %.2f\n",recs[i].rollno,recs[i].name,recs[i].per);
	
	return 0;
}
