#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int get_int() {
    int szam;
    do
    {
        printf("Adjon meg egy pozitiv egesz szamot: ");
        scanf("%d", &szam);
    } while (szam <= 0);
    return szam;
}

float kerulet(int a) {
    return 2*a*M_PI;
}

float terulet(int a) {
    return a*a*M_PI;
}

int main() {
    printf("Kor kerulete es terulete\n");
    int a = get_int();
    printf("A kor kerulete: %f\n", kerulet(a));
    printf("A kor terulete: %f\n", terulet(a));
    return 0;
}