#include <stdio.h>

int main()
{
    int a, f = 0, fa = 1, i;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        if (i != a)
        {
            printf("%d ", f);
            f += fa;
            fa = f - fa;
        }
        else
        {
            printf("%d\n", f);
        }
    }

    return 0;
}