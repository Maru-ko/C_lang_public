#include <stdio.h>
#include <stdlib.h>

int y = 1;

int main()
{
	int x = 4;
	printf("x is stored at %p\n", &x);
	printf("x is %i\n", x);
	printf("y is stored at %p\n", &y);
	printf("y is %i\n", y);
	return 0;
}