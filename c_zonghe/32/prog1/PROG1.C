#include   <stdio.h>
#include   <string.h>
void NONO();

long  fun( char  *s )
{



}
main()
{  char  s[10];    long  r;
   printf("请输入一个长度不超过9个字符的字符串 :  ");  gets(s);
   r = fun( s );
   printf(" r = %ld\n" , r );
   NONO();
   getchar();
}

void NONO()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  int i;
  long r;
  char s[10], *p;

  fp = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fgets(s, 10, fp);
    p=strchr(s,'\n');
    if(p) *p=0;
    r = fun(s);
    fprintf(wf, "%ld\n", r);
  }
  fclose(fp) ;
  fclose(wf) ;
}

