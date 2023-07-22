#include <stdio.h>
float  fun(int m, int n)
{



}

main()   /* 主函数 */
{  void NONO ();
   printf("P=%f\n", fun (12,8));
   NONO();
   getchar();
}

void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  int i, m, n ;
  float s;

  fp = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(fp, "%d,%d", &m, &n) ;
    s = fun(m, n) ;
    fprintf(wf, "%f\n", s) ;
  }
  fclose(fp) ;
  fclose(wf) ;
}

