#include <stdio.h>
#include <string.h>
#define    N     80
int  fun(char  *s,  char  *t)
{  int  n;
   char  *p , *r;
   n=0;
   while ( *s )
   {  p=s;
/*********found**********/
      r=t;
      while(*r)
        if(*r==*p) {  r++;  p++;  }
        else  break;
/*********found**********/
      if(*r== 0)
        n++;
      s++;
   }
   return  n;
}
main()
{  char  a[N],b[N];    int   m;
   printf("\nPlease enter string a : "); gets(a);
   printf("\nPlease enter substring b : "); gets( b );
   m=fun(a, b);
   printf("\nThe result is :  m = %d\n",m);
  getchar();
}
