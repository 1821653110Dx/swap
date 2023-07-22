#include <stdio.h>

int fun(int n)
{
    int m, y;
    y = 0;
    if (n >= 0)
        m = n;
    else
        m = -n;
    while (m != 0) {
/**********found**********/
        y = ____(1)____ + m % 10;
/**********found**********/
        m = ____(2)____
    }
    y = (n >= 0) ? y : -y;
/**********found**********/
    ____(3)____
}
int main()
{
    int m1, m2;
    scanf("%d %d", &m1, &m2);
    printf("%d的逆向是%d\t", m1, fun(m1));
    printf("%d的逆向是%d\n", m2, fun(m2));
    return 0;
}
