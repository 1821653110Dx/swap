#include  <stdio.h>
void fun( int  m, int  a[10])
{  int  i;
  for (i=0; i<10; i++)
/**********found**********/
    a[i] = 0;
  while (m > 0)
  {
/**********found**********/
     i = m%10;
     a[i]++;
/**********found**********/
     m = m/10;
  }
}
main()
{  int  m,  a[10],i;
   printf("请输入一个整数 :  ");   scanf("%d", &m);
   fun(m, a);
   for (i=0; i<10; i++)   printf("%d,",a[i]);  printf("\n");
  getchar();
}
