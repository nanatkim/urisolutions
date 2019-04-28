#include <stdio.h>

int main()
{
    double R;
    scanf("%lf", &R);

    R = 3.14159 * (R * R);
    printf("A=%.4lf\n", R);
}