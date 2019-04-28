#include <stdio.h>

int main()
{
    int a = 1, b = 1, c = 0;
    while (c != 1)
    {
        scanf("%d%d", &a, &b);
        if (a > 0 && b > 0)
        {
            printf("%d\n", a * b);
        }
        else
        {
            c++;
        }
    }

    return 0;
}