#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[20];
    int x;
    while (scanf("%s", s) != EOF)
    {
        for (x = 0; x < strlen(s); x++)
        {
            tolower(s[x]);
        }
        if (strcmp(s, "brasil") == 0 || strcmp(s, "portugal") == 0)
        {
            printf("Feliz Natal!");
        }
        else if (strcmp(s, "alemanha") == 0)
        {
            printf("Frohliche Weihnachten!");
        }
        else if (strcmp(s, "austria") == 0)
        {
            printf("Frohe Weihnacht!");
        }
        else if (strcmp(s, "coreia") == 0)
        {
            printf("Chuk Sung Tan!");
        }
        else if (strcmp(s, "espanha") == 0 || strcmp(s, "argentina") == 0 || strcmp(s, "chile") == 0 || strcmp(s, "mexico") == 0)
        {
            printf("Feliz Navidad!");
        }
        else if (strcmp(s, "grecia") == 0)
        {
            printf("Kala Christougena!");
        }
        else if (strcmp(s, "estados-unidos") == 0 || strcmp(s, "inglaterra") == 0 || strcmp(s, "australia") == 0 || strcmp(s, "antardida") == 0 || strcmp(s, "canada") == 0)
        {
            printf("Merry Christmas!");
        }
        else if (strcmp(s, "suecia") == 0)
        {
            printf("God Jul!");
        }
        else if (strcmp(s, "turquia") == 0)
        {
            printf("Mutlu Noeller");
        }
        else if (strcmp(s, "irlanda") == 0)
        {
            printf("Nollaig Shona Dhuit!");
        }
        else if (strcmp(s, "belgica") == 0)
        {
            printf("Zalig Kerstfeest!");
        }
        else if (strcmp(s, "italia") == 0 || strcmp(s, "libia") == 0)
        {
            printf("Buon Natale!");
        }
        else if (strcmp(s, "siria") == 0 || strcmp(s, "marrocos") == 0)
        {
            printf("Milad Mubarak!");
        }
        else if (strcmp(s, "japao") == 0)
        {
            printf("Merii Kurisumasu!");
        }
        else
        {
            printf("--- NOT FOUND ---");
        }
        printf("\n");
    }
    return 0;
}