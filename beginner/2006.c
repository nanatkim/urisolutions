#include <stdio.h>

int main()
{
    int x, tea[4], i, c = 0;
    scanf("%d", &x);
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &tea[i]);
        if (tea[i] == x)
        {
            c++;
        }
    }
    printf("%d\n", c);

    return 0;
}