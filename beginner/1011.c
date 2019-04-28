#include <stdio.h>

int main()
{
    double a;
    scanf("%lf", &a);

    a = (4.0 / 3) * 3.14159 * (pow(a, 3));

    printf("VOLUME = %.3lf\n", a);
}