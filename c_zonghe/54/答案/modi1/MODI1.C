#include  <stdio.h>
#define   N   10
int findmid(int  a, int  b, int  c)
{  int  t;
   t = (a>b)?(b>c?b:(a>c?c:a)):((a>c)?a:((b>c)?c:b));
/**********found**********/
   return  t;
}
void fun(int  x[])
{  int  i,a,b,c,t[N];
/**********found**********/
   for(i=0;i<N;i++) t[i]=x[i];
   for(i=0;i<N-2;i++)
   {  a=t[i];b=t[i+1];c=t[i+2];
/**********found**********/
      x[i+1]=findmid(a,b,c);
   }
}
main()
{  int  i, x[N]={6,5,7,23,18,5,8,21,45,38};
   for(i=0; i<N; i++)  printf("%d ",x[i]);
   printf("\n");
   fun(x);
   for(i=0; i<N; i++)  printf("%d ",x[i]);
   printf("\n");
  getchar();
}
