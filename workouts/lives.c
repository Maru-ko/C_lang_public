/*

	Where does it live?

*/
#include <stdio.h>

int main()
{
	int x = 4;
	printf("x lives at %p\n", &x);
	int y = 5;
	printf("y lives at %p\n", &y);
	return 0;
}