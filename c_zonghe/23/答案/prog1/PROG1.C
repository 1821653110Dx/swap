#include <stdio.h>
void  fun(int s[][10], int  b[], int  *n, int mm, int nn)
{
  /* 以下代码仅供参考 */
  int i,j,np=0;   /* np用作b数组下标 */
for(j=0;j<nn;j++)
 for(i=0;i<mm;i++)
    b[np++]=s[i][j];

  *n=np;
}
main()
{  int  w[10][10]={{33,33,33,33},{44,44,44,44},{55,55,55,55}},i,j;
   int  a[100]={0}, n=0;void NONO ();
   printf("The matrix:\n");
   for(i=0; i<3; i++)
   {  for(j=0;j<4; j++)printf("%3d",w[i][j]);
      printf("\n");
   }
   fun(w,a,&n,3,4);
   printf("The A array:\n");
   for(i=0;i<n;i++)printf("%3d",a[i]);printf("\n\n");
   NONO();
   getchar();
}
void NONO ()
{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
  FILE *rf, *wf ; int i, j, k ;
  int w[10][10], a[100], n = 0, mm, nn ;
  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(k = 0 ; k < 5 ; k++) {
    fscanf(rf, "%d %d", &mm, &nn) ;
    for(i = 0 ; i < mm ; i++)
      for(j = 0 ; j < nn ; j++) fscanf(rf, "%d", &w[i][j]) ;
    fun(w, a, &n, mm, nn) ;
    for(i = 0 ; i < n ; i++) fprintf(wf, "%3d", a[i]) ; fprintf(wf, "\n") ;
  }
  fclose(rf) ; fclose(wf) ;
}

