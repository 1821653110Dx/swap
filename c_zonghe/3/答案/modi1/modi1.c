#include <stdio.h> 
#pragma warning (disable:4996)
void fun(long n,int *c0,int *c1)
{  int k;
/**********************found***********************/
  *c0=*c1=0;
  do
  { 
/**********************found***********************/
	k= n%10;
	if(k==0) (*c0)++;
	if(k==1) (*c1)++;
/**********************found***********************/
	n=n/10;
  }
  while (n);
}
main()
{ long n;  int c0,c1;
  printf("input n:");
  scanf("%ld",&n);
  fun(n,&c0,&c1);
  printf("c0=%d,c1=%d\n",c0,c1);
}
