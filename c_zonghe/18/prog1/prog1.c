#include   <stdio.h>
#include   <stdlib.h>
#pragma warning (disable:4996)
struct BITS { int  m3, m2, m1, m0; };
struct BITS  fun(int  n)
{
   struct BITS  res;
/* �����ｫ�������벹������ */



}
main( )
{	struct  BITS  a;
	void NONO();	
	int  i=0, n=0;
	for (i=32; i<100; i++)
	{	n = i * i;
		a= fun(n);
		if (a.m3 < a.m2 && a.m2 < a.m1 && a.m1 < a.m0)
		printf("No. is %d\n", n);
	}
	NONO();
}
void NONO()
{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
	struct  BITS  a;
	FILE *fp ;
	int  i=0, n=0;

	fp = fopen("out.dat","w") ;
	for (i=32; i<100; i++)
	{	n = i * i;
		a= fun(n);
		if (a.m3 < a.m2 && a.m2 < a.m1 && a.m1 < a.m0)
			fprintf(fp, "No. is %d\n", n);
	}
	fclose(fp);
}

