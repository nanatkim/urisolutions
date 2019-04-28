#include <stdio.h>

int main()
{

    int a, i, q, m;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        q = i * i;
        m = i * q;
        printf("%d %d %d\n", i, q, m);
    }

    return 0;
}