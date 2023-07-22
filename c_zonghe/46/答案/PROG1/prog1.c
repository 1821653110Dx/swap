#include <stdio.h>
#include <math.h>

int fun(long n)
{
	float y1,y2 = 0;//用于计算
	y1 = sqrt(n + 100);//获取n+100后开方的值
	y2 = sqrt(n + 268);//获取n+268后开方的值
	if ((int)y1 == y1 && (int)y2 == y2)//判断y1,y2是否为整数
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
    long i;
    FILE *fp = fopen("out.dat", "w");

    for(i=1;i<10000;i++)
    {
        if (fun(i))
        {
            printf("%ld\n", i);
            fprintf(fp, "%ld\n", i);
        }
    }
    return 0;


}
