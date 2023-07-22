#include   <stdio.h>
#define   N    100 
void  fun( int *a , int  n )
{  int  i, t;
   for( i=0; i<n; i++ )
/**********found**********/
     a[i]=__(1)__;
   i=0;  
/**********found**********/
   t=__(2)__;
   while( i<n )
   {  a[i]= 1;
      t++;
/**********found**********/
      i=__(3)__;
   }
}
main()
{  int  a[N], i, n=30;
   fun( a, n);
   for(i=0; i<n; i++)
     if( a[i]==1 )  printf("不安全的洞号是 :   %d\n",i );
  getchar();
}
