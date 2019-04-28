#include <stdio.h>

int main()
{
    int a1, a2, b1, b2;
    float a3, b3;
    scanf("%d%d%f", &a1, &a2, &a3);
    scanf("%d%d%f", &b1, &b2, &b3);

    a3 *= a2;
    b3 *= b2;

    printf("VALOR A PAGAR: R$ %.2lf\n", a3 + b3);
}