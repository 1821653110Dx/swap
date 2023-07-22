#include <stdio.h>
#define     M   3
#define     N   4
void  fun(char  s[][N], char *b)
{
  int i,j,n=0;
  for(i=0; i < N;i++)  /* 请填写相应语句完成其功能 */
  {

	  for (j=0;j<M;j++)
		  b[n++]=s[j][i];
  }
  b[n]='\0';
}
main()
{  char  a[100],w[M][N]={{'W','W','W','W'},{'S','S','S','S'},{'H','H','H','H'}};
   int  i,j;void NONO ();
   printf("The matrix:\n");
   for(i=0; i<M; i++)
   {  for(j=0;j<N; j++)printf("%3c",w[i][j]);
      printf("\n");
   }
   fun(w,a);
   printf("The A string:\n");puts(a);
   printf("\n\n");
   NONO();
   getchar();
}
void NONO ()
{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
  FILE *rf, *wf ; int i,j,k ;
  char a[100],w[M][N], b ;
  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(k = 0 ; k < 10 ; k++) {
    for(i = 0 ; i < M ; i++) {
      for(j = 0 ; j < N ; j++) fscanf(rf, "%c", &w[i][j]) ;
      fscanf(rf, "%c", &b) ;
    }
    fun(w, a) ;
    fprintf(wf, "%s\n", a) ;
  }
  fclose(rf) ; fclose(wf) ;
}

