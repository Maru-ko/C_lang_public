#include <stdlib.h>
#include <stdio.h>

void sayHi(char name[]){
    printf("Hello %s!\n\n", name);
}

int main()
{
    sayHi("Amachan");
    sayHi("Chisaki");
    sayHi("Nochi");
    sayHi("Sumire");
    return 0;
}
