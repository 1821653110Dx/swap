#include   <stdio.h>
#include  <string.h>
void NONO();
int  fun( char  *t )
{



}

main()
{  char  s[26];
   printf("请输入一个字母组成的字符串 :  "); gets(s);
   if( fun(s) )  printf("%s 是由连续字母组成的字符串.\n", s );
   else   printf("%s 不是由连续字母组成的字符串!\n", s );
   NONO();
   getchar();
}

void NONO()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  int i;
  char s[26], *p;

  fp = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fgets(s, 26, fp);
	p=strchr(s,'\n');
	if(p) *p=0;
    if (fun(s)) fprintf(wf, "%s\n", s+2);
	else  fprintf(wf, "%s\n", strrev(s));
  }
  fclose(fp) ;
  fclose(wf) ;
}

