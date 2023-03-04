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
int kerulet(int a, int b) {
    return 2*a + 2*b;
}
int terulet(int a, int b) {
    return a*b;
}

int main(){
    printf("Teglalap kerulete es terulete\n");
    int a = get_int();
    int b = get_int();
    printf("A teglalap kerulete: %d\n", kerulet(a,b));
    printf("A teglalap terulete: %d\n", terulet(a,b));
    return 0;
}