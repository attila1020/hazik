#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

double get_double() {
    double szam;
    do
    {
        printf("Adjon meg egy pozitiv egesz szamot: ");
        scanf("%lf", &szam);
    } while (szam <= 0);
    return szam;
}

double felszin(double a) {
    return 4*pow(a,2)*M_PI;
}

double felulet(double a) {
    return (4*pow(a,3)*M_PI)/3;
}

int main() {
    printf("Gomb felszine es terfogata\n");
    double a = get_double();
    printf("A gomb felszine: %lf\n", felszin(a));
    printf("A gomb terfogata: %lf\n", felulet(a));
    return 0;
}