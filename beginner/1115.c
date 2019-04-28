#include <stdio.h>

int main()
{

    int x, y, i = 0;
    while (i != 1)
    {
        scanf("%d%d", &x, &y);
        if (x == 0 || y == 0)
        {
            i++;
        }
        else
        {
            if (x > 0 && y > 0)
            {
                printf("primeiro\n");
            }
            else if (x < 0 && y > 0)
            {
                printf("segundo\n");
            }
            else if (x < 0 && y < 0)
            {
                printf("terceiro\n");
            }
            else if (x > 0 && y < 0)
            {
                printf("quarto\n");
            }
        }
    }

    return 0;
}