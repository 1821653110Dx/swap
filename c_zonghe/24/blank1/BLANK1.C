#include  <stdio.h>
double fun(int  n)
{ int  i, k;    double  s, t;
  s=0;
/**********found**********/
  k=__1__;
  for(i=1; i<=n; i++) {
/**********found**********/
    t=__2__;
    s=s+k*(2*i-1)*(2*i+1)/(t*t);
/**********found**********/
    k=k*__3__;
  }
  return  s;
}
main()
{ int  n=-1;
  while(n<0)
  { printf("Please input(n>0): ");  scanf("%d",&n);  }
  printf("\nThe result is: %f\n",fun(n));
  getchar();
}
