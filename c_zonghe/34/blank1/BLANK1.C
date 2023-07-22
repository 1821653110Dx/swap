#include  <stdio.h>
#define    N    9
int fun(int  x[])
{  int  i,j,k,t,mid,b[N];
   for(i=0;i<N;i++) b[i]=x[i];
   for(i=0;i<=N/2;i++)
   {  k=i;
      for(j=i+1;j<N;j++) if(b[k]>b[j])  k=j;
      if(k != i )
      {  
/**********found**********/
        t=b[i]; b[i]=___1___; b[k]=t;
      }
   }
/**********found**********/
   mid=b[___2___];
   for(i=0; i<N; i++)
/**********found**********/
     if(x[i] ___3___ mid) x[i]=mid;
   return  mid;
}
main()
{  int  i, x[N]={1,5,7,23,87,5,8,21,45};
   for(i=0; i<N; i++)  printf("%d ",x[i]);
   printf("\nThe mid data is: %d\n",fun(x));
   for(i=0; i<N; i++)  printf("%d ",x[i]);
   printf("\n");
  getchar();
}
