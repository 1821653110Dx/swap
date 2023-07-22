#include <stdio.h>
void  fun ( int x, int  pp[], int *n )
{





}

main( )
{  int  x, aa[1000], n, i ;void NONO ();
   printf( "\nPlease enter an integer number:\n" ) ; scanf("%d", &x) ;
   fun(x, aa, &n ) ;
   for( i = 0 ; i < n ; i++ )
         printf("%d ", aa[i]) ;
   printf("\n") ;
   NONO( ) ;
  getchar();
}

void NONO ()
{/* 本函数用于打开文件，输入测试数据，调用fun函数，输出数据，关闭文件。*/
  int x, aa[1000], n, i, j ;
  FILE *fp ;
  fp = fopen("out.dat","w") ;
  for(j = 0 ; j < 10 ; j++) {
    x = 30 + j ;
    fun(x, aa, &n) ;
    for(i = 0 ; i < n ; i++) fprintf(fp, "%d ", aa[i]) ;
    fprintf(fp, "\n") ;
  }
  fclose(fp) ;
}

