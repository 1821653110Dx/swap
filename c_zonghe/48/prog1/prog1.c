#include <stdio.h>
#include <stdlib.h>
#define N 10
#pragma warning (disable:4996)
void NONO(FILE *fp, int pd[], int n);

void fun (int *dp,int n,int upordown)
{


}

void display(int pd[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%4d",pd[i]);
	printf("\n");
}
void main()
{
	int data[N],i,n=N;
	FILE *out ;

    out = fopen("out.dat","w") ;
	for(i=0;i<N;i++)
		data[i]=rand()%90+10;
	for(i=0;i<N-1;i++)
		fun(data+i,n-i,0);
	display(data,n);
	NONO(out, data, n);
	for(i=0;i<N;i++)
		data[i]=rand()%90+10;
	for(i=0;i<N-1;i++)
		fun(data+i,n-i,1);
	display(data,n);
	NONO(out, data, n);
	fclose(out);
}
void NONO(FILE *fp, int pd[], int n)
{
	int i;
	for(i=0;i<n;i++)
		fprintf(fp, "%4d", pd[i]);
	fprintf(fp, "\n");

}

