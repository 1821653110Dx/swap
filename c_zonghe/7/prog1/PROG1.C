#include <stdio.h>
#define   N   50
#define   M   11
void  fun( int  *a,  int  *b)
{



}
double  rnd()
{  static  t=29,c=217,m=1024,r=0;
   r=(r*t+c)%m;  return((double)r/m);
}
main()
{  int  age[N], i, d[M];void NONO (int d[M]);
   for(i=0; i<N;i++)age[i]=(int)(115*rnd());
   printf("The original data :\n");
   for(i=0;i<N;i++) printf((i+1)%10==0?"%4d\n":"%4d",age[i]);
   printf("\n\n");
   fun( age, d);
   for(i=0;i<10;i++)printf("%4d---%4d  :  %4d\n",i*10,i*10+9,d[i]);
   printf("  Over  100  :  %4d\n",d[10]);
   NONO(d);
  getchar();
}
void NONO(int d[M])
{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
  FILE *wf ; int i ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) fprintf(wf, "%4d---%4d  :  %4d\n", i*10, i*10+9, d[i]) ;
  fprintf(wf, "  Over  100  :  %4d\n", d[10]) ;
  fclose(wf) ;
}

