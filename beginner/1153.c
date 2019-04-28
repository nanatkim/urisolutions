#include <stdio.h>

int main()
{
    int a, f = 1;
    scanf("%d", &a);
    for (; a > 0; a--)
    {
        f *= a;
    }
    printf("%d\n", f);
}