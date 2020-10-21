#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2){
    int result;
    if(num1 > num2){
        result = num1;
    } else {
        result = num2;
    }
    return result;
}

int main()
{
    printf("%d\n", max(5, 10));
    printf("%d\n", max(210, 33));
}