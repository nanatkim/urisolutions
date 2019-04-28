#include <stdio.h>

int main()
{
    int a, b, x, i, s;
    scanf("%d", &x);
    while (x > 0)
    {
        s = 0;
        i = 0;
        scanf("%d%d", &a, &b);
        while (i < b)
        {
            if (a % 2 != 0)
            {
                s += a;
                i++;
            }
            a++;
        }
        x--;
        printf("%d\n", s);
    }

    return 0;
}