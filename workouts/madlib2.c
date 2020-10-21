#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s %s", celebrityF, celebrityL);  // will only grab chars up until f

    printf("Fire hydrants are %s\n", color);
    printf("%s are pink\n", pluralNoun);
    printf("I want to marry %s %s\n", celebrityF, celebrityL);
}