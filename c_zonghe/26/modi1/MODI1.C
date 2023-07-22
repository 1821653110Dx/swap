#include <stdio.h>

int  fun ( int m )
{  int k = 2;
   while ( k <= m && (m%k))
/************found************/
     k++
/************found************/
   if (m = k )
     return 1;
   else   return  0;
}

main( )
{  int  n;
   printf( "\nPlease enter n: " );   scanf(  "%d", &n );
   if (  fun (  n ) )  printf( "YES\n" );
   else printf( "NO!\n" );
  getchar();
}
