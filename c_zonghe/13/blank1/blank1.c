#include  <stdio.h>
double fun(double  e)
{ int  i;    double  s, x;
/**********found**********/
  s=0;  i=__1__;
  x=1.0;
  while(x>e){
/**********found**********/
    __2__;
/**********found**********/
    x=(2.0*i-1)/((__3__)*(2.0*i));
    s=s+x;
  }
  return  s;
}
main()
{ double  e=1e-3;
  printf("\nThe result is: %f\n",fun(e));
  getchar();
}
