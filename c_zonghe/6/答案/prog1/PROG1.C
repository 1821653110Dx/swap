#include   <stdio.h>
void NONO();
void  fun(int  *a, int  *b, int  *c, int  *d)
{
	int max,min;
	max=*a;
	min=*d;
	if(*b>max){max=*b;}
	if(*c>max){max=*c;}
	if(*d>max){max=*d;}
	if(*a<min){min=*a;}
	if(*b<min){min=*b;}
	if(*c<min){min=*c;}
	*a=max;
	*d=min;
}
main()
{  int  a, b, c, d;
   printf("请输入4个整数:    ");  scanf("%d%d%d%d", &a,&b,&c,&d);
   printf("输入数据:    %d,%d,%d,%d\n", a, b, c, d);
   fun(&a,&b,&c,&d); 
   printf("最大值:%d,最小值:%d\n", a, d);
   NONO();
   getchar();
}

void NONO()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  int i, a, b, c, d ;

  fp = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for( i=0; i<5; i++ )
  {
     fscanf(fp, "%d %d %d %d", &a, &b, &c, &d);
     fun(&a,&b,&c,&d); 
     fprintf(wf, "a=%d,d=%d\n", a, d);
  }
  fclose(fp) ;
  fclose(wf) ;
}

