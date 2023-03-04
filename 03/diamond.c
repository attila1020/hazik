#include <stdio.h>

int get_int(){
    int szam;
    do
    {
        printf("Adjon meg egy pozitiv egesz paratlan szamot: ");
        scanf("%d", &szam);
    } while (szam <= 0 || szam % 2 == 0);
    return szam;
}

int main() {
    
    int magassag = get_int();
    int m2 = magassag / 2;

    //Felső rész
    int csillag1 = 1;
    int szokoz1 = m2;
    for (int i = 0; i < m2; i++)
    {
        for (int i = 0; i < szokoz1; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < csillag1; i++)
        {
            printf("*");
        }
        szokoz1--;
        csillag1+=2;
        printf("\n");
    }
    
    //Középső csík
    for (int i = 0; i < magassag; i++)
    {
        printf("*");
    }
    printf("\n");

    //Alsó rész
    int csillag = magassag-2;
    int szokoz = 1;
    for (int i = 0; i < m2; i++)
    {
        for (int i = 0; i < szokoz; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < csillag; i++)
        {
            printf("*");
        }
        szokoz++;
        csillag-=2;
        printf("\n"); 
    }
    
    return 0;
}