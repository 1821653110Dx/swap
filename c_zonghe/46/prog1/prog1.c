#include <stdio.h>
#include <math.h>

int fun(long n)
{


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
