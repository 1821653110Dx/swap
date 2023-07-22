#include<stdio.h>
#include<math.h>
int prime(int m)
{
	int k,flag=1;
	for(k=2;k<(int)sqrt((double)m);k++)
		if(m%k==0)
			flag=0;
	return flag;
}
int fun(int n,int *x,int *y)
{
	int k,flag=0;




    return flag;
}
main()
{
	int a,b;FILE *out ;
	out = fopen("out.dat","w") ;
	if(fun(111,&a,&b)) {
		printf("111=%d*%d\n",a,b);
		fprintf(out, "111=%d*%d\n",a,b);
	}
	if(fun(11111,&a,&b)) {
		printf("11111=%d*%d\n",a,b);
		fprintf(out, "11111=%d*%d\n",a,b);
	}
	if(fun(1111111,&a,&b)) {
		printf("1111111=%d*%d\n",a,b);
		fprintf(out,"1111111=%d*%d\n",a,b);
	}
   fclose(out);
   getchar();

}

