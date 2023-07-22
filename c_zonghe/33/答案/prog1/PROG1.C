#include <stdio.h>
void  fun( char *a )
{
  /* 以下代码仅供参考 */
  char *p,*q;
  int n=0;
  p=a;
  while(*p=='*')  /* 统计串头'*'个数n */
  {n++; p++;}
  q=a;
  /* 向前复制字符串，请填写相应的语句完成其功能 */
   while(*p)
	{*q=*p;
	  q++;p++;}


  for(;n>0;n--)  /* 在串尾补n个'*' */
    *q++='*';
  *q='\0';  
}

main()
{  char  s[81];  int  n=0; void NONO ();
   printf("Enter a string:\n");gets(s);
   fun( s );
   printf("The string after moveing:\n");puts(s);
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

