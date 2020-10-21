#include <stdlib.h>
#include <stdio.h>

void sayHi(char name[], int num){
    printf("Hello %s, your contestant number is: %d\n\n", name, num);
}

int main()
{
    sayHi("Amachan", 01);
    sayHi("Chisaki", 02);
    sayHi("Nochi", 03);
    sayHi("Sumire", 04);
    return 0;
}
