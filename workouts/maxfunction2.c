#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3){
    int result;
    if(num1 >= num2 && num1 >= num3){
        printf("%d is bigger than %d and %d\n", num1, num2, num3);
        result = num1;
    } else if (num2 >= 1 && num2 >= 3){
        result = num2;
    } else {
        result = num3;
    }
    return result;
}

int main()
{
    printf("%d\n", max(5, 10, 15));
    printf("%d\n", max(210, 33, 21));
    printf("%d\n", max(1, 2, 99));
    if (5 > 2){
        printf("Double True!\n");
    }
    return 0;
}