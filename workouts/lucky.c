#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    printf("%d\n", luckyNumbers[4]);
    luckyNumbers[4] = 22;
    printf("%d\n", luckyNumbers[4]);
    return 0;
}