#include <stdio.h>
#define max 100

int fun(int xxx[])
{



}
int main()
{
	int xx[max],cnt;
	void NONO(int xx[], int cnt);
	
	cnt = fun(xx);
	printf("符合条件的个数=%d\n", cnt);
	NONO(xx, cnt);
	return 0;
}

void NONO(int xx[], int cnt)
{
	int i;
	FILE *fp;

	fp = fopen("out.dat", "w");
	fprintf(fp, "%d\n", cnt);
	for(i=0;i<cnt;i++)
		fprintf(fp, "%d\n", xx[i]);
	fclose(fp);
}
