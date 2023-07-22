#include <math.h>
#include <stdio.h>
double  fun( int  n)
{



}

main()   /* 主函数 */
{  void NONO ();
   printf("s =%f\n", fun ( 1000) );
   NONO();
   getchar();
}
void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  int i, n ;
  double s;

  fp = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(fp, "%d", &n) ;
    s = fun(n) ;
    fprintf(wf, "%f\n", s) ;
  }
  fclose(fp) ;
  fclose(wf) ;
}

