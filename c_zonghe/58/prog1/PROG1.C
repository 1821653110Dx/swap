#include <stdio.h>
void  fun( char *a, int n,int h,int e )
{


}

main()
{  char  s[81],*t,*f;  int m=0, tn=0, fn=0;void NONO ();
   printf("Enter a string:\n");gets(s);
   t=f=s;
   while(*t){t++;m++;}
   t--;
   while(*t=='*'){t--;tn++;}
   while(*f=='*'){f++;fn++;}
   fun( s , m,fn,tn );
   printf("The string after deleted:\n");puts(s);
   NONO();
   getchar();
}
void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *in, *out ;
  int i ; char s[81], *t, *f ;
  int m=0, tn=0, fn=0;
  in = fopen("in.dat","r") ;
  out = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(in, "%s", s) ;
    t=f=s;
    m=0; tn=0; fn=0;
    while(*t){t++;m++;}
    t--;
    while(*t=='*'){t--;tn++;}
    while(*f=='*'){f++;fn++;}
    fun(s, m, fn, tn);
    fprintf(out, "%s\n", s) ;    
  }
  fclose(in) ;
  fclose(out) ;
}

