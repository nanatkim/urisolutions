#include <stdio.h>

int main()
{

    int a, i = 1, p;
    scanf("%d", &a);
    while (i <= a)
    {
        if (i % 2 == 0)
        {
            p = pow(i, 2);
            printf("%d^2 = %d\n", i, p);
        }
        i++;
    }
}