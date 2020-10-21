/*

* Program to calculate the number of cards in the shoe.

* This code is released under the vegas Public License.

* Some year allright.

*/

#include <stdio.h>
int main()
{
	int decks;
	puts("Enter a number of decks");
	scanf("%i", &decks);
	if (decks < 1) {
		puts("That is not a valid number of decks");
		return 1;
	}
	printf("there are %i cards\n", (decks * 52));
	return 0;
}