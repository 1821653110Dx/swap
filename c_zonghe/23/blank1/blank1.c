#include   <stdio.h>
#pragma warning (disable:4996)
#define    N   16
/**********************found***********************/
int  fun( char  ____(1)____)  
{  int  i,  n = 0;
/**********************found***********************/
   for (i=0; ____(2)____ ; ++i)
/**********************found***********************/
        n = n*2 + (s[i] -____(3)____) ; 
   return  n;
}
main( )
{  char  num[] = "10011";    int  n;
   n = fun(num);
   printf( "%s-->%d\n", num, n );
}

