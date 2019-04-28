#include <stdio.h>

int main()
{
    double a, f = 0, d1, d2, r;
    scanf("%lf", &a);
    r = sqrt(5);
    d1 = (1 + r) / 2;
    d2 = (1 - r) / 2;
    f = (pow(d1, a) - pow(d2, a)) / r;
    printf("%.1lf\n", f);

    return 0;
}