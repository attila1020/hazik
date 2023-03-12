#include <stdio.h>

int is_even(int a) {
    return (a % 2 == 0) ? 1 : 0; 
}
int is_odd(int a) {
    return (a % 2 == 1) ? 1 : 0;
}
int is_odd_with_is_even(int a) {
    return (is_even(a)) ? 0 : 1;
}

int main() {
    int szam;
    printf("Adjon meg egy egesz szamot: ");
    scanf("%d", &szam);

    printf("A verzio: \n");
    if (is_even(szam)) {
        printf("A megadott szam paros\n");
    } else printf ("A megadott szam paratlan\n");

    printf("B verzio: \n");
    if (is_odd(szam)) {
        printf("A megadott szam paratlan\n");
    } else printf ("A megadott szam paros\n");

    printf("C verzio: \n");
    if (is_odd_with_is_even(szam)) {
        printf("A megadott szam paratlan\n");
    } else printf("A megadott szam paros\n"); 

    return 0;
}