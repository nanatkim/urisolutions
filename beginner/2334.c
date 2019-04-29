#include <stdio.h>

int main()
{
    unsigned long long P;

    while (scanf("%llu", &P))
    {
        if (P == -1ll)
            break;

        printf("%llu\n", !P ? 0ll : P - 1ll);
    }

    return 0;
}