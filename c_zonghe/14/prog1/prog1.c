#include<stdio.h>
#pragma warning (disable:4996)
int fun(int n, int result[])
{ 




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
{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
	FILE *fp ;
	int i;

	fp = fopen("out.dat","w") ;
	fprintf(fp, "%d\n", n);
	for(i=0; i<n; i++) fprintf(fp, "%d\n", result[i]);
	fclose(fp);
}

