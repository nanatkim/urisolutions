#include <stdio.h>

int main()
{
    int a, b;
    float c;
    scanf("%d%d%f", &a, &b, &c);

    c *= b;

    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2f\n", c);
}