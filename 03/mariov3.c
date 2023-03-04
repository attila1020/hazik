#include <stdio.h>

int get_int(){
    int szam;
    do
    {
        printf("Adjon meg egy pozitiv egesz szamot: ");
        scanf("%d", &szam);
    } while (szam <= 0);
    return szam;
}

int main() {
    int magassag = get_int();

    for (int i = 1; i <= magassag; i++) {
        int teglak = i;
        int szokozok = magassag-i;
        for (int j = 1; j <= szokozok; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < teglak; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int k = 0; k < teglak; k++)
        {
            printf("#");
        }
        for (int j = 1; j <= szokozok; j++)
        {
            printf(" ");
        }
        
        
        printf("\n");
}
    return 0;
}