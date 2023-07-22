#include  <stdio.h>
double fun(int  n)
{ int  i;    double  s, t;
/**********found**********/
  s=__1__;
/**********found**********/
  for(i=1; i<=__2__; i++)
  { t=2.0*i;
/**********found**********/
    s=s+(2.0*i-1)*(2.0*i+1)/__3__;
  }
  return  s;
}
main()
{ int  n=-1;
  while(n<0)
  { printf("Please input(n>0): "); scanf("%d",&n);  }
  printf("\nThe result is: %f\n",fun(n));
  getchar();
}
