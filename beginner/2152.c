#include <stdio.h>

int main()
{
    int x, i, a, b, c;
    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        if (b < 10 && a < 10 && c == 1)
        {
            printf("0%d:0%d - A porta abriu!\n", a, b);
        }
        else if (b < 10 && a < 10 && c == 0)
        {
            printf("0%d:0%d - A porta fechou!\n", a, b);
        }
        else if (a < 10 && c == 1)
        {
            printf("0%d:%d - A porta abriu!\n", a, b);
        }
        else if (a < 10 && c == 0)
        {
            printf("0%d:%d - A porta fechou!\n", a, b);
        }
        else if (b < 10 && c == 0)
        {
            printf("%d:0%d - A porta fechou!\n", a, b);
        }
        else if (b < 10 && c == 1)
        {
            printf("%d:0%d - A porta abriu!\n", a, b);
        }
        else if (c == 1)
        {
            printf("%d:%d - A porta abriu!\n", a, b);
        }
        else if (c == 0)
        {
            printf("%d:%d - A porta fechou!\n", a, b);
        }
    }

    return 0;
}