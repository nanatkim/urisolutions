#include <stdio.h>

int main()
{
    int x, y, i;
    scanf("%d%d", &x, &y);
    for (i = 1; i <= y; i++)
    {
        if (i == y)
        {
            printf("%d\n", i);
        }
        else if (i % x == 0)
        {
            printf("%d\n", i);
        }
        else
        {
            printf("%d ", i);
        }
    }

    return 0;
}