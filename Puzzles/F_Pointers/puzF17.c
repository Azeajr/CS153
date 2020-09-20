#include <stdio.h>

int dee( int a);

int dum( int x )
{
  x -= 1 ;
  x = dee(x);
  return x;
}

int dee( int a )
{
  if ( a > 10 )
    a = dum(a);
  else
    a -= 2 ;

  return a;
}

int main ( void )
{
  int x;

  x = dum(7);
  printf("scope m: x=%d\n", x);

  return 0 ;
}
