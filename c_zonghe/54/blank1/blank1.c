#include  <stdlib.h>
#include  <stdio.h>
#define   N   10
double fun(double  *x)
{ int  i, j;    double  s, av, y[N];
  s=0;
  for(i=0; i<N; i++)  s=s+x[i];
/**********found**********/
  av=__1__;
  for(i=j=0; i<N; i++)
    if( x[i]>av ){
/**********found**********/
      y[__2__]=x[i]; x[i]=-1;}
  for(i=0; i<N; i++)
/**********found**********/
    if( x[i]!= __3__) y[j++]=x[i];
  for(i=0; i<N; i++)x[i] = y[i];
  return  av;
}
main()
{ int  i;     double  x[N]= {46,30,32,40,6,17,45,15,48,26};
  for(i=0; i<N; i++) printf("%4.0f ",x[i]);
  printf("\n");
  printf("\nThe average is: %f\n",fun(x));
  printf("\nThe result :\n",fun(x));
  for(i=0; i<N; i++)  printf("%5.0f ",x[i]);
  printf("\n");
  getchar();
}
