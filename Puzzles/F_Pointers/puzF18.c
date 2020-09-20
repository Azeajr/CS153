#include <stdio.h>
double dee(double a);

double dum( double x )
{
  x -= 1.0 ;
  x = dee(x);
  return x;
}

double dee( double a )
{
  if ( a > 10.0 )
    a = dum(a);
  else
    a -= 2.0;

  return a;
}

int main ( void )
{
  double x;

  x = dum(7.0);
  printf("scope m: x=%lf\n", x);

  system("pause") ;
  return 0 ;
}
