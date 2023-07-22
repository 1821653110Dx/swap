#include  <stdio.h>
#pragma warning (disable:4996)
double  fun(double x[], int n)
{	int i, k=0;
    double avg=0.0, sum=0.0;
	for (i=0; i<n; i++) 
		avg += x[i];
/**********************found***********************/
	avg /= ____(1)____;
	for (i=0; i<n; i++) 
		if (x[i] > avg)
		{
/**********************found***********************/
			____(2)____ += x[i];
			k++;
		}
/**********************found***********************/
	return  ____(3)____;
}
main( )
{  double score[12] ={50,60,70,80,90,100,55,65,75,85,95,99};
   double aa;
   aa= fun(score,12);
   printf("%f\n",aa);
}
