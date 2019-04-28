#include <stdio.h>

int main()
{
    int i, a = 0;
    double t = 0, n[100];
    scanf("%lf", &n[0]);
    for (i = 0; i < 100; i++)
    {
        t = n[i] / 2;
        n[i + 1] = t;
    }
    for (i = 0; i < 100; i++)
    {
        printf("N[%d] = %.4lf\n", i, n[i]);
    }

    return 0;
}