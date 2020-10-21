#include <stdio.h>
#include <stdlib.h>
// '%c" does not work!
int main()
{
    int age;
    float iq;
    char letter;
    char word[20];
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your IQ: ");
    scanf("%f", &iq);
    printf("Enter your fave letter: ");
    scanf("%s", &letter);
    printf("Enter your Fave word: ");
    scanf("%s", word);
    //fflush(stdin);
    printf("Your age is %d, your IQ is %.2f, your fave letter is %c, your fave word is %s\n", age, iq, letter, word);
    //fflush(stdin);
    return 0;
}