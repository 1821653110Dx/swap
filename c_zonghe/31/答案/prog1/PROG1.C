#include <stdio.h>
#pragma warning (disable:4996)
double fun(int  n)
{   int i;
    double sum=0.0,tmp=1.0; 
    if(n<=1||n>100){ printf("Input n(n>1&&n<=100):  ");  scanf("%d",&n);}
    for(i=1;i<=n;i++)
    {	tmp*=i; 
        sum+=1.0/tmp; 
    }
    return sum; 
}
main()
{ int  n;    double  s;
  void NONO( );
  printf("\nInput n:  ");  scanf("%d",&n);
  s=fun(n);
  printf("\n\ns=%f\n\n",s);
  NONO();
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

