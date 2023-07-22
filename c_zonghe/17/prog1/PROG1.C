#include <stdio.h>
#include <string.h>
#define    N   80
int  fun( char  *s)
{



}
main()
{  char  line[N];    int  num=0;void NONO ();
   printf("Enter a string :\n"); gets(line);
   num=fun( line );
   printf("The number of word is  :  %d\n\n",num);
   NONO();
  getchar();
}
void NONO ()
{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
  FILE *rf, *wf ; int i, num ; char line[N], *p ;
  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fgets(line, N, rf) ;
    p = strchr(line, '\n') ;
    if(p != NULL) *p = 0 ;
    num = fun(line) ;
    fprintf(wf, "%d\n", num) ;
  }
  fclose(rf) ; fclose(wf) ;
}

