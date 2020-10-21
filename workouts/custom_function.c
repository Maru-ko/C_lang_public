// This is a program with a custom function
#include <stdio.h>

int larger(int a, int b)
{
	if (a > b)
		return a;
	return b;
}

int smaller(int a, int b)
{
	if (a < b)
		return a;
	return b;
}

int main()
{
	int greatest = larger(99, 199);
	printf("%i is the greatest!\n", greatest);
	int smallest = smaller(15, 16);
	printf("%i is the smallest!\n", smallest);
	return 0;
}