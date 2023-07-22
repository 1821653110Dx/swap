#include  <stdio.h>
#include  <stdlib.h>
#define   N  20
int  fun( int *b )
{
/**********found**********/
   int  t[N] ,i, num=0;
   for(i=0; i<N; i++)
     if(b[i]>=10)
/**********found**********/
       t[num++]=b[i];
/**********found**********/
    for(i=0; i<num; i++)
      b[i]=t[i];
    return( num );
}
main()
{  int  a[N],i,num;
   printf("a数组中的数据 :\n");
   for(i=0;i<N ;i++) {a[i]=rand()%21; printf("%4d",a[i]);}
   printf("\n");
   num=fun(a);
   for(i=0;i<num ;i++) printf("%4d",a[i]);
   printf("\n");
  getchar();
}
