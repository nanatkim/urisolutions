#include <stdio.h>

int main()
{
    double a, b, c, d, p;
    scanf("%lf%lf", &a, &b);
    d = b - a;
    if (d == a)
    {
        p = 100;
        printf("%.2lf\%\n", p);
    }
    else
    {
        p = (100 * d) / a;
        printf("%.2lf\%\n", p);
    }

    return 0;
}