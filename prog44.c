// eg-1 on scope of vars
#include <stdio.h>

int a = 10, b = 20;    // global vars

// fn decl
void display();

int main()
{
	int b = 30;  // new local var b created in scope of main()
  	b = 40;  // local var b is modified
  	a = 50; // as we have not written "int" in front of var a, new local var is not created
  			// & this will modify global var a
	printf("In main(), global var a = %d and local var b = %d",a,b);  // 50, 40
	display();
	return 0;
}

void display()
{
	printf("\nIn display(), global vars a = %d and b = %d",a,b);  // 50, 20
}
