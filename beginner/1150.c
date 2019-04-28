#include <stdio.h>

int main()
{
    int x, z, i, j, c, cont = 1;
    scanf("%d", &x);
    for (i = 0; i != 1;)
    {
        scanf("%d", &z);
        if (z > x)
        {
            i++;
        }
    }
    c = x;
    for (; c < z; x++)
    {
        cont++;
        c += x;
    }
    printf("%d\n", cont);

    return 0;
}