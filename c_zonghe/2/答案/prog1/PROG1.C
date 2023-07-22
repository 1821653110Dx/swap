#include <stdio.h>
#pragma warning (disable:4996)
int fun(int  n)
{
 int i,s=0;
 if(n<1000)
 {for (i=2;i<n;i++)
    if (n%i==0) s=s+i;}
  return (s);
}
main()
{ int  n,sum;
  void NONO( );
  printf("Input n:  ");  scanf("%d",&n);  getchar();
  sum=fun(n);
  printf("sum=%d\n",sum);
  NONO();
  getchar();
}
void NONO()
{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
  FILE *rf, *wf ; int i, n, sum ;
  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(rf, "%d", &n) ;
    sum = fun(n) ;
    fprintf(wf, "%d=%d\n", n, sum) ;
  }
  fclose(rf) ; fclose(wf) ;
}

