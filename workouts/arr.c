#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNums[6];
    luckyNums[0] = 8;
    luckyNums[3] = 16;
    luckyNums[5] = 64;

    printf("%d, %d, %d\n=> this one is an error: %d\n", luckyNums[0], luckyNums[3], luckyNums[5], luckyNums[1]);
    return 0;
}