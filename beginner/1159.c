#include <stdio.h>

int main()
{
    int a, i = 0, c, s;
    while (i != 1)
    {
        c = 0;
        s = 0;
        scanf("%d", &a);
        if (a == 0)
        {
            i++;
        }
        else
        {
            while (c < 5)
            {
                if (a % 2 == 0)
                {
                    s += a;
                    c++;
                }
                a++;
            }
            printf("%d\n", s);
        }
    }

    return 0;
}