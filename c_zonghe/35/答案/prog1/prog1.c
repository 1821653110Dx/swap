#include <stdio.h>
#include <string.h>

/* 函数int_to_str的功能是将参数n中的整数转换成字符串，存入s指内存中 */
void int_to_str(int n,char *s)
{
    sprintf(s,"%d",n);	
}

char  *fun(int x[], int n)
{
	static char str[200]={'\0'};
    int i,j;
    char* strP = str;
	
    /* 请在这里填入你编写的代码*/
	//获取数组中的偶数
	for (i = 0;i < n;i++)
	{
		if (x[i] % 2 == 0)
		{
			int temp = x[i];
			char s[10]={'\0'};
			char* strP2 = s;
 
			//获取整数的每一位并记录在s[10]中
			while (temp) 
			{
				int_to_str(temp % 10, strP2++);
				temp /= 10;
			}

			//反向取出每一位并赋值给str[200]这个里面
			for ( j=(strP2-s-1);j>=0;j--)
			{
				*strP = s[j];
				++strP;
			}

			//添加小数点
			*strP = '.';
			++strP;
 
		}
		
	}
    return str;
}

int main()
{
    void NONO();
    int x[] = {1,4,19,82,61,2};
    printf("str=%s\n", fun(x, 6));
    NONO();
    return 0;
}

void NONO()
{
    int i;
    int x[10][20] = {{11,5,6,8,9,18,54},{1,4,19,82,61,2},
    {87,78,54,32},{9,1,2,3,4,67,8,12},
    {91,12,33,55,66},{9,7,8,5,6,4,3,2,1,12},
    {12,13,14,15,11,16,17,18},{21,23,22,24,25,26,27,28,29},
    {33,32,31,41,42,43,51,42,53,54,66},{71,72,81,82,91,92}};
    int y[10] ={7,6,4,8,5,10,8,9,11,6};
    FILE *fp;

    fp = fopen("out.dat","w") ;
    for(i = 0; i< 10; i++)
        fprintf(fp, "str=%s\n", fun(x[i], y[i]));
  fclose(fp);

}

