#include  <stdio.h>
double fun(double  e)
{ int  i, k;    double  s, t, x;
  s=0;  k=1;  i=2;
/**********found**********/
  x=3.0/4;
/**********found**********/
  while(x > e)
  { s=s+k*x;
    k=k* (-1);
    t=2*i;
/**********found**********/
    x=(2*i+1)/(t*t);
    i++;
  }
  return  s;
}
main()
{ double  e=1e-3;
  printf("\nThe result is: %f\n",fun(e));
  getchar();
}
