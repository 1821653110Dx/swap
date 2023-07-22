#include <stdio.h>
#pragma warning (disable:4996)
#define N 10
int fun(int x[], int e, int *sum)
{



}
main()
{  
	void NONO();
	int x[N] = {1, 7, 8, 6, 10, 15, 11, 13, 29, 31}, e = 3, n, sum;
	n=fun(x, e, &sum);
	printf("n=%d,sum=%d\n", n, sum);
	NONO();
}



void NONO()
{
/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，
   输出数据，关闭文件。 */
    int i, j, x[10], n, e, sum;
    FILE *rf, *wf ;

    rf = fopen("in.dat","r") ;
    wf = fopen("out.dat","w") ;
    for(i=0; i<5; i++) {
        for(j=0; j<10; j++) fscanf(rf, "%d ", &x[j]);  fscanf(rf, "%d", &e);
        n = fun( x, e, &sum );
        fprintf(wf, "%d, %d\n", n, sum);
    }
   fclose(rf) ;
   fclose(wf) ;
}

