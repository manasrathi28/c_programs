// an eg in which the called fn becomes a calling fn for some other fn
#include <stdio.h>

// fn declaration - optional if function is defined before it is called
void street(), college();

int main()
{
	printf("I'm in my home");
	street();
	printf("\nI'm back home");
	college();
	return 0;
}

void street()
{
	printf("\nI'm on my way to college");
	college();
	printf("\nI'm on my way to home");
}

void college()
{
	printf("\nI'm in my college attending lectures & practicals");
}
