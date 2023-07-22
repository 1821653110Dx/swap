#include  <stdio.h>
typedef  struct  list
{  int  data;
   struct list  *next;
} LIST;
int fun(LIST *h)
{  LIST  *p;
/**********found**********/
   int  t;
   p=h;
/**********found**********/
   while( *p )
   {
/**********found**********/
      t=t+p.data;
      p=(*p).next;              
   }
   return  t;
}
main()
{  LIST  a, b, c, *h; 
   a.data=34;  b.data=51;  c.data=87;  c.next='\0';
   h=&a;  a.next=&b;  b.next=&c;
   printf("×ÜºÍ = %d\n",fun( h ));
   getchar();
}
