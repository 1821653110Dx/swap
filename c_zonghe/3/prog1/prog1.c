#include <stdio.h>
float fun ( float  h )
{



}

main( )
{   float  a;void NONO ();
    printf ("Enter  a:  "); scanf ( "%f", &a );
    printf ( "The original data is :   " );
    printf ( "%f \n\n", a );
    printf ( "The result :  %f\n", fun ( a ) );
    NONO( );
  getchar();
}

void NONO ()
{/* ���ڴ˺����ڴ��ļ�������������ݣ����� fun ������
    ������ݣ��ر��ļ��� */
  int i ;
  float a ;
  FILE *rf, *wf ;

  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 20 ; i++) {
    fscanf(rf, "%f", &a) ;
    fprintf(wf, "%f\n", fun(a)) ;
  }
  fclose(rf) ;
  fclose(wf) ;
}

