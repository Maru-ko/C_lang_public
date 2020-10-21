#include <stdio.h>
#include <stdlib.h>
// '%c" does not work!
int main()
{
    int age;
    float iq;
    char letter;
    char quote[20];
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your IQ: ");
    scanf("%f", &iq);
    printf("Enter your fave letter: ");
    scanf("%s", &letter);
    fflush(stdin);
    printf("Enter your Fave quote: ");
    fgets(quote, 20, stdin);
    printf("Your age is %d, your IQ is %.2f, your fave letter is %c, your fave quote is %s\n", age, iq, letter, quote);
    //fflush(stdin);
    return 0;
}