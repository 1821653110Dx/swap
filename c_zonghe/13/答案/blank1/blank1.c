#include  <stdio.h>
double fun(double  e)
{ int  i;    double  s, x;
/**********found**********/
  s=0;  i=0;
  x=1.0;
  while(x>e){
/**********found**********/
    i++;
/**********found**********/
    x=(2.0*i-1)/((2.0*i)*(2.0*i));
    s=s+x;
  }
  return  s;
}
main()
{ double  e=1e-3;
  printf("\nThe result is: %f\n",fun(e));
  getchar();
}
