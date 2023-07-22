#include <stdio.h>
#include <stdlib.h>
typedef  struct  aa
{  int  data;  struct  aa  *next; }NODE;
int  fun(NODE  *h)
{ int   sum = 0 ;
  NODE  *p;
/***********found**********/
  p=h;
  while(p)
  {  if(p->data%2==0)
     sum +=p->data;
/***********found**********/
     p=h->next;
  }
  return  sum;
}
NODE  *creatlink(int  n)
{  NODE  *h, *p, *s;
   int  i;
   h=p=(NODE *)malloc(sizeof(NODE));
   for(i=1; i<=n; i++)
   {  s=(NODE *)malloc(sizeof(NODE));
      s->data=rand()%16;
      s->next=p->next;
      p->next=s;
      p=p->next;
   }
   p->next=NULL;
   return  h;
}
outlink(NODE  *h, FILE  *pf)
{  NODE *p;
   p = h->next;
   fprintf(pf ,"\n\nTHE  LIST :\n\n  HEAD " );
   while(p)
   {  fprintf(pf ,"->%d ",p->data ); p=p->next; }
      fprintf (pf,"\n");
}
outresult(int  s, FILE *pf)
{  fprintf(pf,"\nThe sum of even numbers  :  %d\n",s);}
main()
{  NODE  *head;    int  even;
   head=creatlink(12);
   head->data=9000;
   outlink(head , stdout);
   even=fun(head);
   printf("\nThe  result  :\n"); outresult(even, stdout);
   getchar();
}
