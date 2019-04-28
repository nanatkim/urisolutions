#include <stdio.h>

int main()
{
    int a, b;
    float total = 0;
    scanf("%d%d", &a, &b);

    if (a == 1)
    {
        total = b * 4.00;
        printf("Total: R$ %.2f\n", total);
    }
    else if (a == 2)
    {
        total = b * 4.50;
        printf("Total: R$ %.2f\n", total);
    }
    else if (a == 3)
    {
        total = b * 5.00;
        printf("Total: R$ %.2f\n", total);
    }
    else if (a == 4)
    {
        total = b * 2.00;
        printf("Total: R$ %.2f\n", total);
    }
    else if (a == 5)
    {
        total = b * 1.50;
        printf("Total: R$ %.2f\n", total);
    }
}