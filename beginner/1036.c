#include <stdio.h>

int main()
{
    double a, b, c, d, r;
    scanf("%lf%lf%lf", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    a = a * 2;
    if (d < 0 || a <= 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        r = sqrt(d);
        printf("R1 = %.5lf\n", (-b + r) / a);
        printf("R2 = %.5lf\n", (-b - r) / a);
    }

    return 0;
}