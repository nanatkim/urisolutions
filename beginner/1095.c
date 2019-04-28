#include <stdio.h>

int main()
{
    int j = 60, n, i = 1;

    printf("I=1 J=60\n");
    while (j > 0)
    {
        j = j - 5;
        i = i + 3;
        printf("I=%d J=%d\n", i, j);
    }
}