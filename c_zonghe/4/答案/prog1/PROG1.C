#include <stdio.h>
#pragma warning (disable:4996)
double  fun(int  n)
{
 double m=1.0,p=1.0;
 int i;
 for(i=1;i<=n;i++)
 {  p=p*i;
    m=m+1.0/p;
 }
 return (m);
}
main()
{  int  n;     double  s;
   void NONO( );
   printf("Input n:  ");  scanf("%d",&n); getchar();
   s=fun(n);
   printf("s=%f\n",s);
   NONO();
   getchar();
}
void NONO()
{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
  FILE *rf, *wf ; int n, i ; double s ;
  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(rf, "%d", &n) ;
    s = fun(n) ;
    fprintf(wf, "%lf\n", s) ;
  }
  fclose(rf) ; fclose(wf) ;
}

