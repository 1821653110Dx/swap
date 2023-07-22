#include <stdio.h>

/************found************/
void fun (  int  n )
{   int  a, b, c, k;  double  s;
    s = 0.0;  a = 2;  b = 1;
    for ( k = 1; k <= n; k++ ) {
/************found************/
      s = s + (Double)a / b;
       c = a;  a = a + b; b = c;
    }
    return s;
}

main( )
{  int   n = 5;
   printf( "\nThe value of  function is: %lf\n",  fun (  n ) );
   getchar();
}
