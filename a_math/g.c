#include <stdio.h>
#include <math.h>


double pf(double x)
double pf(double x)

int main()
{
  
  double fi = Maths::Calculus::Quadrature::gauss(f, 2, 3),
 
  realfi = pf(3) - pf(2);
 
  printf("      f(x) = sin(x)\n");
  printf("   I(2, 3) = %.15lf\n", fi);
  printf("real value = %.15lf\n", realfi);
  printf("     error = %.15lf\n\n", fabs(fi - realfi));
 
  return 0;
}

double f(double x)
{
  return sin(x);
}

double pf(double x)
{
  return -cos(x);
}
