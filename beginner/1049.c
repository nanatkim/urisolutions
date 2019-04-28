#include <stdio.h>

int main()
{

    char a[20], b[20], c[20];
    scanf("%s%s%s", a, b, c);
    if (strcmp(a, "vertebrado") == 0)
    { //a
        if (strcmp(b, "ave") == 0)
        { //b
            if (strcmp(c, "carnivoro") == 0)
            { //c
                printf("aguia\n");
            }
            else
            { //else c
                printf("pomba\n");
            }
        }
        else if (strcmp(b, "mamifero") == 0)
        { //else do b
            if (strcmp(c, "onivoro") == 0)
            { //c
                printf("homem\n");
            }
            else
            { //else c
                printf("vaca\n");
            }
        }
    }
    else if (strcmp(a, "invertebrado") == 0)
    { //a2
        if (strcmp(b, "inseto") == 0)
        { //b2
            if (strcmp(c, "hematofago") == 0)
            { //c2
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n"); //else c2
            }
        }
        else if (strcmp(b, "anelideo") == 0)
        { //else do b2
            if (strcmp(c, "hematofago") == 0)
            { //c2
                printf("sanguessuga\n");
            }
            else
            { //c2
                printf("minhoca\n");
            }
        }
    }

    return 0;
}