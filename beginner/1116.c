#include <stdio.h>

int main()
{

    float a, b, d;
    int x;
    scanf("%d", &x);
    while (x > 0)
    {
        scanf("%f%f", &a, &b);
        if (b == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            d = a / b;
            printf("%.1f\n", d);
        }
        x--;
    }
    return 0;
}