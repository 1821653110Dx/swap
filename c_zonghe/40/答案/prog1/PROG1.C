#include <stdio.h>
#include <math.h>
double fun(double x , int  n)
{ int i;
  double f=1.0,h=x;
  double s=1;
  s=s+h/f;        
  for (i=2;i<=n;i++)
  { f=f*i;      
    h=h*x;       
    s=s+h/f;
  }
 return (s);
}

main()
{  void NONO ();
   printf("%f\n", fun(0.3,10));
   NONO();
  getchar();
}

void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  int i, n ;
  double s, x ;

  fp = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(fp, "%lf,%d", &x, &n) ;
    s = fun(x, n) ;
    fprintf(wf, "%f\n", s) ;
  }
  fclose(fp) ;
  fclose(wf) ;
}

