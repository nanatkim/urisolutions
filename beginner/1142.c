#include <stdio.h>

int main()
{

    int x, i = 1;
    scanf("%d", &x);
    for (; x != 0; x--)
    {
        printf("%d %d %d PUM\n", i, i + 1, i + 2);
        i = i + 4;
    }

    return 0;
}