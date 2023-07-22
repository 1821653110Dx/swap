#include  <stdio.h>
void NONO();
double fun(double  a[ ] , int  n)
{
    double min,max,s,avg;
    int i;
    min=a[0];
    max=a[0];
    s=0.0;
    avg=0.0;
    for(i=0;i<n;i++)
    {
	if(min>a[i])
		min=a[i];
	if(max<a[i])
		max=a[i];
	s+=a[i];
    }
    avg=(s-min-max)/(n-2);
    return avg;
}

main()
{  double  b[10],  r;    int  i;
    printf("输入10个分数放入b数组中 :  ");
    for (i=0; i<10; i++)   scanf("%lf",&b[i]);
    printf("输入的10个分数是 :  ");
    for (i=0; i<10; i++)   printf("%4.1lf ",b[i]);    printf("\n");
    r = fun(b, 10);
    printf("去掉最高分和最低分后的平均分 :  %f\n", r );
    NONO();
    getchar();
}

void NONO()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  int i, j ;
  double b[10], r ;

  fp = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    for(j = 0 ; j < 10 ; j++) {
      fscanf(fp, "%lf ", &b[j]) ;
    }
    r = fun(b, 10) ;
    fprintf(wf, "%f\n", r) ;
  }
  fclose(fp) ;
  fclose(wf) ;
}

