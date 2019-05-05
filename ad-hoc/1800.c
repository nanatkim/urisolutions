#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main()
{
    short int Q, E, i = 0, j = 0, visitou;
    scanf("%hd %hd", &Q, &E);

    short int Si[E], Ci[Q];
    while (i < E)
    {
        scanf("%hd", &Si[i]);
        i++;
    }

    i = 0;

    while (i < Q)
    {
        scanf("%hd", &Ci[i]);
        i++;
    }

    i = 0;

    while (i < Q)
    {
        visitou = FALSE;
        while (j < Q)
        {
            if (j < E)
            {
                if (Ci[i] == Si[j])
                {
                    visitou = TRUE;
                    break;
                }
            }

            if (Ci[i] == Ci[j] && i > j)
            {
                visitou = TRUE;
                break;
            }

            j++;
        }

        if (visitou)
            printf("0\n");
        else
            printf("1\n");

        i++;
        j = 0;
    }

    return 0;
}