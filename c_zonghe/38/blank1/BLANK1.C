#include  <stdio.h>
typedef  struct  list
{  char  data;
   struct list  *next;
} Q;
void fun( Q *pa, Q *pb, Q *pc)
{  Q  *p;
/**********found**********/
   pa->next=___1___;
   pb->next=pc;
   p=pa;
   while( p )
   {
/**********found**********/
      printf("  %c",____2_____);
/**********found**********/
      p=____3____;
   }
   printf("\n");
}
main()
{  Q  a, b, c;
   a.data='E';  b.data='F';  c.data='G';  c.next=NULL;
   fun( &a, &b, &c );
  getchar();
}
