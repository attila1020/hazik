#include <stdio.h>

void feladat(int n) {
    printf("\n%d. feladat: \n",n);
}
int elso_feladat() {
    //213g
    // Írjunk programot, ami kiszámolja az egész számok összegét 1-től 100-ig.
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    return sum;
}
int masodik_feladat() {
    // 213h
    // Állapítsuk meg azon 1000-nél kisebb számok összegét, melyek 3-nak vagy 5-nek a többszörösei.
    int sum = 0;
    for (int i = 1; i < 1000; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}
int harmadik_feladat() {
    // 219a
    // Írjon programot, ami 0 végjelig egész számokat olvas be. Írja ki a számok összegét (a végjel természetesen nem számít).
    int sum = 0;
    int szam;
    do {
        printf("Adjon meg egy szamot(vege 0): ");
        scanf("%d", &szam);
        if (szam != 0) {
            sum += szam;
        }

    } while(szam != 0);
    return sum;
}
int negyedik_feladat() {
    // 213m
    // Írjon programot, ami 0 végjelig egész számokat olvas be. Írja ki, hány darab pozitív számot adott meg
    //  a felhasználó (a végjel természetesen nem számít).
    int szam;
    int counter = 0;
    do {
        printf("Adjon meg egy szamot(vege: 0): ");
        scanf("%d", &szam);
        if (szam != 0 && szam > 0) {
            counter++;
        }

    } while(szam != 0);
    return counter;
}
void otodik_feladat() {
    // 213n
    // Írjon programot, ami 0 végjelig egész számokat olvas be. Írja ki, 
    // hány darab pozitív és hány darab negatív számot adott meg a felhasználó
    int szam;
    int pozcounter = 0;
    int negcounter = 0;
    do {
        printf("Adjon meg egy szamot(vege: 0): ");
        scanf("%d", &szam);
        if (szam != 0 && szam > 0) {
            pozcounter++;
        } else if (szam != 0 && szam < 0) {
            negcounter++;
        }

    } while(szam != 0);
    printf("\nPozitiv elemek szama: %d\n",pozcounter);
    printf("\nNegativ elemek szama: %d\n",negcounter);
}
char hatodik_feladat(int n1, int n2) {
    //220c
    //Írjunk egy programot, amely beolvas két pozitív egész számot (n1 és n2),
    //  majd a program írja ki azt a relációs jelet, amit a két érték közé helyezhetünk (<, > vagy =)!
    if (n1 > n2) {
        return '>';
    } else if (n1 < n2) {
        return '<';
    } else return '=';

}
void hetedik_feladat(int n) {
    // 220a
    // Írjunk egy programot, amely beolvas egy pozitív egész számot 
    // (n), majd kiírja 1-től n-ig (zárt intervallum) az összes néggyel osztható számot!
    for (int i = 1; i <= n; i++) {
        if (i % 4 == 0){
            printf("%d\n", i);
        }
    }
}
void nyolcadik_feladat(int n) {
    // 220b
    // Írjunk egy programot, amely beolvas egy pozitív egész számot
    //  (n), majd kiírja n-től 1-ig (zárt intervallum) visszafelé az összes páratlan számot!
    for (int i = n; i >= 1; i--) {
        if (i % 2 != 0){
            printf("%d\n", i);
        }
    }
}
int main()
{
    // 1. feladat 213g
    // Írjunk programot, ami kiszámolja az egész számok összegét 1-től 100-ig.
    feladat(1);

        printf("A szamok osszege 1-tol 100-ig: %d\n",elso_feladat());

    // 2. feladat 213h
    // Állapítsuk meg azon 1000-nél kisebb számok összegét, melyek 3-nak vagy 5-nek a többszörösei.
    feladat(2);

        printf("A 3-mal vagy 5-tel oszthato szamok osszege 1000-ig: %d\n", masodik_feladat());

    // 3. feladat 219a
    // Írjon programot, ami 0 végjelig egész számokat olvas be. Írja ki a számok összegét (a végjel természetesen nem számít).
    feladat(3);
    
        printf("\nA megadott szamok osszege: %d\n", harmadik_feladat());

    // 4. feladat 213m
    // Írjon programot, ami 0 végjelig egész számokat olvas be. Írja ki, hány darab pozitív számot adott meg
    //  a felhasználó (a végjel természetesen nem számít).
    feladat(4);

        printf("\nPozitiv elemek szama: %d\n", negyedik_feladat());

    // 5. feladat: 213n
    // Írjon programot, ami 0 végjelig egész számokat olvas be. Írja ki, 
    // hány darab pozitív és hány darab negatív számot adott meg a felhasználó
    feladat(5);

        otodik_feladat();

    // 6. feladat: 220c
    // Írjunk egy programot, amely beolvas két pozitív egész számot (n1 és n2),
    //  majd a program írja ki azt a relációs jelet, amit a két érték közé helyezhetünk (<, > vagy =)!
    feladat(6);

        int n1,n2;
        printf("Adjon meg egy szamot: ");
        scanf("%d", &n1);
        printf("Adjon meg egy szamot: ");
        scanf("%d", &n2);
        printf("%c\n",hatodik_feladat(n1,n2));

    // 7.feladat 220a
    // Írjunk egy programot, amely beolvas egy pozitív egész számot 
    // (n), majd kiírja 1-től n-ig (zárt intervallum) az összes néggyel osztható számot!
    feladat(7);

        int n;
        printf("Adjon meg egy szamot: ");
        scanf("%d", &n);
        hetedik_feladat(n);

    // 8. feladat 220b
    // Írjunk egy programot, amely beolvas egy pozitív egész számot
    //  (n), majd kiírja n-től 1-ig (zárt intervallum) visszafelé az összes páratlan számot!
    feladat(8);

        printf("Adjon meg egy szamot: ");
        scanf("%d", &n);
        nyolcadik_feladat(n);


    return 0;
}
