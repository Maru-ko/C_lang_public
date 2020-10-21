#include <stdio.h>

void fortune_cookie(char msg[])
{
	printf("Message reads: %s\n", msg);
	printf("msg occupies %i bytes\n", sizeof(msg));
	printf("The quote string is stored at: %p\n", msg);
}
int main()
{
char quote[] = "Cookies make you gain weight";
fortune_cookie(quote);
return 0;
}