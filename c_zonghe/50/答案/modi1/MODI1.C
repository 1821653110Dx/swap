#include <stdio.h>
int fun( int  *b )
{  int   k,a1,a2,i=0;
   for(k=10; k<=55; k++) {
/************found************/
      a2=k/10;
      a1=k-a2*10;
      if((k%3==0 && a2==5)||(k%3==0 && a1==5))
      {  b[i]=k; i++; }
   }
/************found************/
   return  i;
 }
main( )
{  int  a[100],k,m;
   m=fun( a );
   printf("The result is :\n");
   for(k=0; k<m; k++) printf("%4d",a[k]);  printf("\n");
  getchar();
}
