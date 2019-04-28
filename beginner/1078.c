#include <stdio.h>

int main()
{

    int N, n, i = 1;
    scanf("%d", &N);

    if (2 < N && N < 1000)
    {
        for (; i <= 10; i++)
        {
            n = N * i;
            printf("%d x %d = %d\n", i, N, n);
        }
    }
}