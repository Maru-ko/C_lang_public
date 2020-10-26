#include <stdio.h>

int main() {

    int a = 7;
    int b = 2;
    float c = (float)(a / b);
    printf("\nc = %.2f\n", c);

   int sum = 95, count = 3;
   double mean;

   mean = (double) (sum / count);
   printf("Sum Value: %.2f\n\n", mean );

   float  y = 23.5;
   char z = 'z';
   int total;

   total = y + z;

   
   printf("Sum Value : %d\n", total );
   printf("y value: %.2f z value: %d\n", y, z);
   return 0;
}