#include <stdio.h>
#define max 100

int fun(int xxx[])
{
int i,j,l,k=0;
  for(i=1;i<5;i++)
	  for(j=1;j<5;j++)
		if (j!=i) 
		  for(l=1;l<5;l++)
			  if (l!=j && l!=i)
				  xxx[k++]=i*100+j*10+l;

   return k;


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
