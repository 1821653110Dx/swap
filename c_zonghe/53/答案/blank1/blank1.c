#include <stdio.h>
double fun(double x[], int n)
{
	int i,k=0;
	double avg = 0.0,sum=0.0;
	for(i=0;i<n;i++)
/***********found**********/
		avg+=x[i];
/***********found**********/
	avg/=n;
	for(i=0;i<n;i++)
		if(x[i]<avg)
		{
/***********found**********/
			sum+=x[i];
			k++;
		}
	return sum/k;
}
main()
{
	double score[12]={50,60,70,80,90,100,55,65,75,85,95,99};
	double aa;
	aa=fun(score,12);
	printf("%f\n",aa);
}
