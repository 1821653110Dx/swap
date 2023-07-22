#include  <stdio.h>
int fun(int* c, int d) { 
  int s0, s1, i;
  s0 = 0;
  s1 = 0;
/********************found***********************/
  for (i=0; i<d; i++) 
{
         if ((i % 2 == 0) && (c[i] % 2 == 0)) 
                s0 += c[i];
/**********************found***********************/
         if ((i % 2 == 1) && (c[i]%2==1))
               s1 += c[i]; 
  }
/**********************found***********************/
  return s0-s1;
}
 main( ) 
{ 
    int i, c[100], d;
    printf("请输入整数序列的长度：");
    scanf("%d", &d);
    printf("请输入%d个整数：\n",d);
    for (i = 0; i < d; i++)
         scanf("%d", &(c[i]));
    i = fun(c, d);
    printf("%d", i);
}