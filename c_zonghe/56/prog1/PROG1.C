#include <stdio.h>
#include <string.h>
#define  N  80
int fun(char *str)
{


}

main()
{ char  s[N] ;void NONO ();
  printf("Enter a string: ") ; gets(s) ;
  printf("\n\n") ; puts(s) ;
  if(fun(s)) printf("  YES\n") ;
  else       printf("  NO\n") ;
  NONO() ;
  getchar();
}
void NONO ()
{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
  FILE *rf, *wf ;
  int i ; char s[N] ;
  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(rf, "%s", s) ;
    if(fun(s)) fprintf(wf, "%s  YES\n", s) ;
    else       fprintf(wf, "%s  NO\n", s) ;
  }
  fclose(rf) ; fclose(wf) ;
}

