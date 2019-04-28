#include <stdio.h>

int main()
{

    int x, p = 1;
    scanf("%d", &x);

    while (p <= 6)
    {
        if (x % 2 != 0)
        {
            printf("%d\n", x);
            p++;
        }
        x++;
    }
}