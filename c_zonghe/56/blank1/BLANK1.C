#include  <stdio.h>
#include  <stdlib.h>
void fun( int *a,  int n )
{  int  i;
   for(i=0; i<n; i++)
   {
/**********found**********/
     if( ___1___==0 )
/**********found**********/
           printf("___2___");
/**********found**********/
      printf("%d  ",___3___);
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
