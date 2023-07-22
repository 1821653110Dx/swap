#include <stdio.h>
#define M 4
int fun (int a[][M])
{int i,j,max;
 max=a[0][0];
 for(i=0;i<2;i++)
   for(j=0;j<M;j++)
     if(max<a[i][j]) max=a[i][j];
 return max;
}

main( )
{  int arr[2][M]={5,8,3,45,76,-4,12,82} ;void NONO ();
   printf("max =%d\n", fun(arr)) ;
   NONO( ) ;
  getchar();
}

void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *wf ;
  int arr[][M]={5,8,3,90,76,-4,12,82} ;

  wf = fopen("out.dat","w") ;
  fprintf(wf, "max=%d\n", fun(arr)) ;
  fclose(wf) ;
}

