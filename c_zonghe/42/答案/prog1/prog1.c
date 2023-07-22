#include <stdio.h>
#include <stdlib.h>
#define  N  5
void fun ( int a[][N], int m )
{
int i,j; 
  for(i=0; i<N; i++) 
    for(j=N-1; j>=i; j--) 
      a[i][j]*=m; 
}

main ( )
{  int  a[N][N], m, i, j;void NONO ();
   printf("***** The array *****\n");
   for ( i =0;  i<N; i++ )
   {  for ( j =0; j<N; j++ )
     {  a[i][j] = rand()%20; printf( "%4d", a[i][j] ); }
        printf("\n");
   }
   do m = rand()%10 ; while ( m>=3 );
   printf("m = %4d\n",m);
   fun ( a ,m );
   printf ("THE  RESULT\n");
   for ( i =0;  i<N; i++ )
   {  for ( j =0; j<N; j++ ) printf( "%4d", a[i][j] );
      printf("\n");
   }
   NONO ( );
   getchar();
}

void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *rf, *wf ;
  int i, j, n, a[5][5] ;

  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 5 ; i++)
  for(j = 0 ; j < 5 ; j++)
    fscanf(rf, "%d ", &a[i][j]) ;
  fscanf(rf, "%d", &n) ;
  fun(a, n) ;
  for ( i = 0;  i < 5; i++ ) {
    for ( j = 0; j < 5; j++ ) fprintf(wf, "%4d", a[i][j] );
    fprintf(wf, "\n");
  }
  fclose(rf) ;
  fclose(wf) ;
}

