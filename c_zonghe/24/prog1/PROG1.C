#include <stdio.h> 
#pragma warning (disable:4996)
#define N 11
double fun( int xx[], int *yy )
{
     
}

main()
{
    int yy, xx[N]={1101,1202,1303,1404,1505,2611,2712,2813,2914,3202,4222};
    double pjz ;
    void NONO();

    pjz = fun( xx, &yy );
    printf("yy=%d, pjz=%.2lf\n", yy, pjz);
    NONO();
}

void NONO()
{
/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，
   输出数据，关闭文件。 */
    int i, j, xx[N], yy;
    double pjz;
    FILE *rf, *wf ;

    rf = fopen("in.dat","r") ;
    wf = fopen("out.dat","w") ;
    for(i=0; i<10; i++) {
        for(j=0; j<N; j++) fscanf(rf, "%d ", &xx[j]);
        pjz = fun( xx, &yy );
        fprintf(wf, "%d, %.2lf\n", yy, pjz);
    }
   fclose(rf) ;
   fclose(wf) ;
}

