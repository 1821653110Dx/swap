#include <stdio.h>
#include <math.h>

/************found************/
void fun( int  k )
{  int n; double s,  w, p, q;
   n = 1;
   s = 1.0;
/************found************/
   while ( n < k )
   { w = 2.0 * n;
     p = w - 1.0;
     q = w + 1.0;
     s = s * w *w/p/q;
     n++;
   }
/************found************/
   return  s
}

main ( )
{
   printf("%f\n", fun (10));
  getchar();
}
