#include <stdio.h>
#include "totaller.h"
//double add_with_tax(double f); // $money Mak3r! // protype function

double total = 0.0; short count = 0;
float tax_percent = 8.8875;

int main() {

double val;
printf("Mc. Dowells Burger Place!\nPrice of item: ");

while (scanf("%lf", &val) == 1) {
    printf("Total so far: $%.2f\n", add_with_tax(val));
    printf("Price of item: ");
}
printf("\nFinal total: $%.2f\n", total);
printf("Number of items: %hi\n", count);

return 0;
}

double add_with_tax(double f) {
double tax_rate = 1 + tax_percent / 100.0;

total = total + (f * tax_rate);
count = count + 1;
return total;
}

/*

We have a call to a function that the compiler does not recognize
Compiler makes the assumption it is an `int`
#include is a preprocessor instruction

*/