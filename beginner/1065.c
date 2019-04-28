#include <stdio.h>

int main()
{

    int a, i = 0, p = 0;
    while (i < 5)
    {
        scanf("%d", &a);
        if (a < 0)
        {
            a = a + a * 2;
            if (a % 2 == 0)
            {
                p++;
            }
        }
        else if (a % 2 == 0)
        {
            p++;
        }
        i++;
    }
    printf("%d valores pares\n", p);
}