/*

	Practicing writing C code for the masses
	En route to building a new religion

*/
int main()
{
	char card_name[3];
	puts("Enter the Card Name: ");
	scanf("%2s", card_name);
	int val = 0;
	if (card_name[0] == 'K') {
		val = 10;
	} else if (card_name[0] == 'Q') {
		val = 10;
	} else if (card_name[0] == 'J') {
		val = 10;
	} else if (card_name[0] == 'A') {
		val = 11;
	} else {
		val = atoi(card_name)
	}
}