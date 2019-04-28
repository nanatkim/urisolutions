#include <stdio.h>

int main()
{
    float a, b, c, d;
    scanf("%f%f", &a, &b);

    c = a * b;
    d = c / 12;

    printf("%.3f\n", d);
}