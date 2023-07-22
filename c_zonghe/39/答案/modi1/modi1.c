#include <stdio.h>
/************found************/
double  fun ( int n )
{  float  A=1; int i;
/************found************/
   for (i=2; i<=n; i++)
     A = 1/(1+A);
   return A ;
}

main( )
{  int  n ;

   printf("\nPlease enter n: ") ;
   scanf("%d", &n ) ;
   printf("A%d=%f\n", n, fun(n) ) ;
  getchar();
}
