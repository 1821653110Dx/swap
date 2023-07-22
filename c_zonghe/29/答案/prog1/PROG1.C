#include <stdio.h>
#include <string.h>
#define   M   3
#define   N   20
void  fun(char  a[M][N], char  *b)
{int i,j,d=0;             
 for(i=0;i<100;i++)b[i]=0; 
 for(i=0,d=0;i<3;i++)    
   for(j=0;*(a[i]+j);j++)
     {
      *(b+d)=*(a[i]+j);    
      d++;
      }
}
main()
{  char  w[M][N]={"AAAA","BBBBBBB","CC"}, a[100];
   int i ;void NONO ();
   printf("The string:\n");
   for(i=0; i<M; i++)puts(w[i]);
   printf("\n");
   fun(w,a);
   printf("The A string:\n");
   printf("%s",a);printf("\n\n");
   NONO();
  getchar();
}
void NONO ()
{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
  FILE *rf, *wf ;
  char w[M][N], a[100] ; int i ;
  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(rf, "%s %s %s", w[0], w[1], w[2]) ;
    fun(w, a) ;
    fprintf(wf, "%s\n", a) ;
  }
  fclose(rf) ; fclose(wf) ;
}

