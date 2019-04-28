#include <stdio.h>

int main()
{

    int a, b;
    scanf("%d%d", &a, &b);
    while (a != b)
    {
        if (a < b)
        {
            printf("Crescente\n");
        }
        else if (b < a)
        {
            printf("Decrescente\n");
        }
        scanf("%d%d", &a, &b);
    }

    return 0;
}