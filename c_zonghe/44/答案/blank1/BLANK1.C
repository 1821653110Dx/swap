#include  <stdio.h>
void  fun( int *px,  int  *py)
{
/**********found**********/
   int  a=0,b=0,k ;
   scanf( "%d", &k );
/**********found**********/
   while  (k)
   {  if (k>0 ) a++;
      if(k<0 ) b++;
/**********found**********/
      scanf("%d",&k);
   }
   *px=a;  *py=b;
}
main()
{  int  x,  y;
   fun( &x, &y );
   printf("x=%d  y=%d\n", x,y );
  getchar();
}
