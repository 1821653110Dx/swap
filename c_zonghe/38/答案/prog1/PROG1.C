#include  <stdio.h>
void NONO();
int  fun(int  n)
{
	int k=0;
	while(n!=0)
	{
		n=n/10;
		k++;
	}
	return k;
}
main()
{  int  n, place ;
   do{
      printf("请输入一个4位以内的正整数:    ");
      scanf("%d", &n);
     }  while (n<0 || n>9999);
   place = fun(n);
   printf( "输入的数字是%d位\n", place );
   NONO();
   getchar();
}

void NONO()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  int i, n, place ;

  fp = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for( i=0; i<10; i++ )
  {
     fscanf(fp, "%d ", &n);
     place = fun(n);
     fprintf(wf, "%d\n", place);
  }
  fclose(fp) ;
  fclose(wf) ;
}

