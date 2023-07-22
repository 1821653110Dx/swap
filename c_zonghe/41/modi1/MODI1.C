#include <stdio.h>
double fun( int m )
{
  double t = 1.0;
  int i;
  for( i = 2; i <= m; i++ )
/**********found**********/
    t = 1.0-1 /i;
/**********found**********/
   _______;
}

main()
{
  int m ;
  printf( "\nPlease enter a number:\n" );
  scanf(  "%d", &m);
  printf( "\n\nThe result is %lf\n", fun( m ) );
  getchar();
}
