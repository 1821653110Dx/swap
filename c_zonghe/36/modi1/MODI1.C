#include <stdio.h>

/**************found**************/
fun (int n )
{   int  a = 2, b = 1, c, k ;
    double  s=0.0 ;
    for ( k = 1; k <= n; k++ )
    {  s = s + 1.0 * a / b ;
/**************found**************/
       c = a;  a += b; b += c;
    }
    return(s) ;
}

main( )
{   int   n = 5 ;
    printf( "\nThe value of  function is: %lf\n",  fun (  n ) ) ;
    getchar();
}
