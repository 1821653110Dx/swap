#include  <stdio.h>
#include  <stdlib.h>
#define  M  14
void NONO();
void  fun( char (*t)[M], int *a ,int *c)
{



}

void  get( char (*s)[M] )
{  int  i, j;
   for( i=0; i<M; i++ )
   {  for( j=0; j<M; j++)
      {  s[i][j]=65+rand()%12; printf( "%c ",s[i][j]); }
      printf("\n");
   }
}

main()
{  char  a[M][M];
   int   x, y;
   get (a);
   fun ( a, &x,&y );
   printf("A = %d   C = %d\n",x,y);
   NONO();
   getchar();
}

void NONO()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  int i, j, x, y ;
  char  a[M][M];

  fp = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for( i=0; i<M; i++ )
  {  for( j=0; j<M; j++)
     {  fscanf(fp, "%c ", &a[i][j]); }
  }
  fun ( a, &x,&y );
  fprintf(wf, "A=%d\n", x) ;
  fprintf(wf, "C=%d\n", y) ;
  fclose(fp) ;
  fclose(wf) ;
}

