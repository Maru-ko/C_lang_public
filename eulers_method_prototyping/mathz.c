#include <stdio.h>
#include <stdlib.h>
//#include "mathstuff.h"

double squared(double num);
double cubed(double num);
double eulers(double x, double y);

int main()
{
    double sq;
    double cb;
    double a, b, x, y, h, t, k;
    //printf("12 squared is: %.2f\n", squared(12.0));
    //printf("900 cubed is: %.2lf\n", cubed(999));
    printf("Enter a numbet to square: ");
    scanf("%lf", &sq);
    printf("%.2lf squared is: %.2lf: \n", sq, squared(sq));
    printf("Enter a number to cube: ");
    scanf("%lf", &cb);
    printf("%.2lf cubed is: %.2lf\n", cb, cubed(cb));
    printf("\nEnter x0, y0, h, xn: ");
    scanf("%lf%lf%lf%lf", &a, &b, &h, &t);
    x = a,
    y = b,
    printf("\nEuler's Method:\n x\t y\n");
    while(x <= t)
    {
        k = h * eulers(x, y);
        y = y + k;
        x = x + h;
        printf("%0.3lf\t%0.3lf\n", x, y);
    }
    return 0;
}

double squared(double num){
    double result = num * num;
    return result;
}

double cubed(double num){
    double result = num * num * num;
    return result;
}

double eulers(double x, double y)
{
    double f;
    f = x + y;
    return f;
}
