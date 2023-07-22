#include <stdio.h>
void  fun ( int x, int  pp[], int *n )
{  int i,k,j = 0 ;
       for(i=1;i<=x;i+=2)               
       {if((x%i)==0) pp[j++] =i;      
        *n=j ;}                       
       for(i=0;i<j-1;i++)
       for(k=i+1;k<j;k++)
       if(pp[i]>pp[k])
        {x=pp[i]; pp[i]=pp[j]; pp[j]=x;} 
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

