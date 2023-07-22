#include<stdio.h>
#pragma warning (disable:4996)
int fun(int n, int result[])
{ int i,j,k=0,s;
  for(i=1000;i<n;i++)
	{s=0;j=i;
     while(j>0)
		{s+=(j%10)*(j%10)*(j%10)*(j%10);
	     j=j/10;}
	 if (s==i) result[k++]=i;
	 }
  return k;
}
main( )
{
	int result[10], n, i;
	void NONO(int result[], int n);
	n = fun(9999, result);
	for(i=0; i<n; i++) printf("%d\n", result[i]);
	NONO(result, n);
}

void NONO(int result[], int n)
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
	FILE *fp ;
	int i;

	fp = fopen("out.dat","w") ;
	fprintf(fp, "%d\n", n);
	for(i=0; i<n; i++) fprintf(fp, "%d\n", result[i]);
	fclose(fp);
}

