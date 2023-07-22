#include  <stdio.h>
void fun( int  m, int  a[10])
{  int  i;
  for (i=0; i<10; i++)
/**********found**********/
    __1__ = 0;
  while (m > 0)
  {
/**********found**********/
     i = ___2___;
     a[i]++;
/**********found**********/
     m = ___3___;
  }
}
main()
{  int  m,  a[10],i;
   printf("请输入一个整数 :  ");   scanf("%d", &m);
   fun(m, a);
   for (i=0; i<10; i++)   printf("%d,",a[i]);  printf("\n");
  getchar();
}
