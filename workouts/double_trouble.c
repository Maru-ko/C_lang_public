/*

 two arguments to a method invocation call

*/
#include <stdio.h>
int larger(int a, int b)
{
	if (a > b)
		return a;
	return b;
}

int main()
{
	int greatest = larger(100, 1000);
	printf("%i is the greatest!\n", greatest);
	int smallest = larger(69, 669);
	printf("%i is the smallest!\n", smallest);
	return 0;
}