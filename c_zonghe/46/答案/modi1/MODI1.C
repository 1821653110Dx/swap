#include <stdio.h>
/************found************/
double fun (int m )
{
    double y = 0, d ;
    int    i ;
    /************found************/
    for( i = 100; i <= m; i += 100 )
    {
        d = (double)i * (double)i ;
        y += 1.0 / d ;
    }
    return( y ) ;
}

main( )
{
    int  n = 2000 ;
    printf( "\nThe result is %lf\n", fun ( n ) ) ;
  getchar();
}
