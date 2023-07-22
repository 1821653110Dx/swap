#include <stdio.h>
#define   N  20
int fun(int *a,int n,int x)
{   int   p=0,i;
    a[n]=x;
    while( x!=a[p] )
	p=p+1;
/**********found**********/
    if(P==n) return -1;
    else
    { for(i=p;i<n-1;i++)
/**********found**********/
	  a[i+1]=a[i];
      return n-1;
    }
}
main()
{  int  w[N]={-3,0,1,5,7,99,10,15,30,90},x,n,i;
   n=10;
   printf("The original data :\n");
   for(i=0;i<n;i++) printf("%5d",w[i]);
   printf("\nInput x (to delete): "); scanf("%d",&x);
   printf("Delete  :  %d\n",x);
   n=fun(w,n,x);
   if ( n==-1 ) printf("***Not be found!***\n\n");
   else
   {  printf("The data after deleted:\n");
      for(i=0;i<n;i++) printf("%5d",w[i]);printf("\n\n");
   }
  getchar();
}
