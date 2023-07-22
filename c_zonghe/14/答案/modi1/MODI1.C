#include <stdio.h>
#pragma warning (disable:4996)
void fun (long s, long *t)
{   long sl = 10;
    s /= 10;
/**********found**********/
    *t = s % 10;
    while(s > 0) {
        s = s / 100;
/**********found**********/
        *t = s % 10 * sl + *t;
/**********found**********/
        sl *= 10;
    }
}

main()
{   long s, t;
    printf("\nPlease enter long number:");
    scanf("%ld", &s); fun(s, &t);
    printf("The result is: %ld\n", t);
}
