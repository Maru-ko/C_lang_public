#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int TOP = 5;
    printf("%d\n", TOP);
    TOP = 7; //error should be generated here!
    printf("%d\n", TOP);
    return 0;

}