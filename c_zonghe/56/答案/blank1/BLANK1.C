#include  <stdio.h>
#include  <stdlib.h>
void fun( int *a,  int n )
{  int  i;
   for(i=0; i<n; i++)
   {
/**********found**********/
     if( i%5==0 )
/**********found**********/
           printf("\n");
/**********found**********/
      printf("%d  ",a[i]);
   }
}
main()
{  int  a[100]={0}, i,n;
   n=22;
   for(i=0; i<n;i++) a[i]=rand()%21;
   fun( a, n);
   printf("\n");
  getchar();
}
