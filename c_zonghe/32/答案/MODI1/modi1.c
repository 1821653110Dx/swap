#include <stdio.h>
void fun(int num, int r)
{   int i = 0, a[32];
    char b[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    do
    {
        a[i] = num % r;
/************found************/
        num /= r;
        i++;
/************found************/
    } while(num>0);
/************found************/
    for(i=i-1; i>=0; --i)
        printf("%c", b[a[i]]);
}

int main()
{   int num, r;
    printf("\n请输入整数和进制:");
    scanf("%d %d", &num, &r);
    fun(num, r);
    printf("\n");
    return 0;
}

