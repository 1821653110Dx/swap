#include  <stdio.h>
#include  <stdlib.h>
#include  <ctype.h>
#pragma warning (disable:4996)
struct Ord
{
	int n;
	long ordor;
};
long fun(int n)
{
	static struct Ord old={0,1};
	int i;
	if(n==old.n)
/**********************found***********************/
	return (old.ordor);
	if(n>old.n)
		for(i=old.n+1;i<=n;i++)
			old.ordor*=i;
	else
		for(i=old.n;i>n;i--)
			old.ordor/=i;

/**********************found***********************/
	old.n=n;
/**********************found***********************/
	return (old.ordor);
}
main( )
{ 
	int i,n;
	for(i=0;i<5;i++)
	{
		n=rand()%10;
		printf("%d  %ld\n",n,fun(n));
	}
}
