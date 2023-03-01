# hazik
220d
#include <stdio.h>

int main() {
    int magassag;
    printf("magassag: ");
    scanf("%d", &magassag);

    for (int i = 1; i <= magassag; i++)
    {
        for (int j = 0; j < i; j++)
        {
           printf("#");
        }
        printf("\n");
    }
    
    return 0;
}
220e
#include <stdio.h>

int main() {
    int magassag;
    printf("magassag: ");
    scanf("%d", &magassag);

    for (int i = 1; i <= magassag; i++)
    {
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
        
        
        printf("\n");
    }
    
    return 0;
}
