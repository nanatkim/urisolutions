#include <stdio.h>

int main()
{
    int a, i, b;
    for (b = 0; b != 1;)
    {
        scanf("%d", &a);
        if (a != 0)
        {
            for (i = 1; i <= a; i++)
            {
                if (i != a)
                {
                    printf("%d ", i);
                }
                else
                {
                    printf("%d\n", i);
                }
            }
        }
        else
        {
            b++;
        }
    }

    return 0;
}