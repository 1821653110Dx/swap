#include  <stdio.h>
void  fun( int  a[55], int  n )
{  int  i, k  ;
/**********found**********/
   int  __(1)__[55];
   for (i=0; i<n; i++) 
   {  for (k=1; k<= 27; k++) 
      {  b[ 2*k-1 ] = a[k];
/**********found**********/
         b[ __[2]___* k ] = a[k+27];
     }
     for (k=1; k<=54; k++)
/**********found**********/
       a[k]=___(3)___;
   }
}
main( )
{  int  m, a[55],i;
   for (i=1; i<55; i++)   a[i]= i;
   printf("ÇëÊäÈëÏ´ÅÆ´ÎÊý :    ");   scanf("%d", &m);
   fun(a, m);
   for (i=1; i<55; i++)   printf("%d,",a[i]);
   printf("\n");
  getchar();
}
