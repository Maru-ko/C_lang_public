#include <stdio.h>
#include <stdlib.h>

int main(){

    double num1;
    double num2;
    char op;
    printf("Welcome to 'C' calculator!\n");
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    if(op == '+'){
        printf("%.2f\n", num1 + num2);
    } else if(op == '-'){
        printf("%.2f\n", num1 - num2);
    } else if(op == '*'){
        printf("%.2f\n", num1 * num2);
    } else if(op == '/'){
        printf("%.2f\n", num1 / num2);
    } else {
        printf("Invalid Operator!");
    }


    return 0;
}