#include <stdio.h>
#include <string.h>
#define    N    80
void fun1(char *w)  /* 本函数的功能是将字符串中字符循环左移一个位置 */
{
  int i; char t;
  t=w[0];
  for(i=0;i<(int)strlen(w)-1;i++)
    w[i]=w[i+1];
  w[strlen(w)-1]=t;
}

void  fun(char  *w, int  m)  /* 可调用fun1函数左移字符 */
{



}
main()
{  char  a[N]= "ABCDEFGHIJK";
   int  m;void NONO ();
   printf("The original string:\n");puts(a);
   printf("\n\nEnter  m:  ");scanf("%d",&m);
   fun(a,m);
   printf("\nThe string after moving:\n");puts(a);
   printf("\n\n");
   NONO();
   getchar();
}
void NONO ()
{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
  FILE *rf, *wf ; char a[N] ; int m, i ;
  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(rf, "%d %s", &m, a) ;
    fun(a, m) ;
    fprintf(wf, "%s\n", a) ;
  }
  fclose(rf) ; fclose(wf) ;
}

