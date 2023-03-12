#include <stdio.h>

// Oldalak bekérése a felhasználótól
double get_double() {

    double szam;

    printf("Adjon meg egy valos erteket: ");
    scanf("%lf", &szam);
    return szam;
    
}

//Oldalak vizsgálata
int valid_triangle(double a, double b, double c) {
    if (a < 0 || b < 0 || c < 0) {
        return 0;
    } else if (a + b > c && a + c > b && b + c > a ) {
        return 1;
    } else return 0; 
}

int main() {
    // 228a Megrajzolható háromszögek
    double a = get_double();
    double b = get_double();
    double c = get_double();
    
    if (valid_triangle(a, b, c)) {
        printf("\nA haromszog szerkesztheto.\n");
    } else {
        printf("\nHibas oldalak!\n");
    }
    return 0;
}