#include <stdio.h>
void  fun( char *a )
{
  /* 以下代码仅供参考 */
  int i=0,k;
  while(a[i]=='*') i++;
  k=i;
  while(a[i]!='\0')  /* 以下程序段实现非*字符前移 */
  {


  }
  a[k]='\0';
}

main()
{  char  s[81];void NONO ();
   printf("Enter a string:\n");gets(s);
   fun( s );
   printf("The string after deleted:\n");puts(s);
   NONO();
   getchar();
}
void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *in, *out ;
  int i ; char s[81] ;
  in = fopen("in.dat","r") ;
  out = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(in, "%s", s) ;
    fun(s) ;
    fprintf(out, "%s\n", s) ;    
  }
  fclose(in) ;
  fclose(out) ;
}

