#include <stdio.h>

int main()
{
    printf("Adja meg az egyik oldalt: ");

    int a,b;
    scanf("%d",&a);
    printf("Adja meg a maik oldalt: ");
    scanf("%d", &b);

    int terulet = a * b;
    int kerulet = (a + b)*2;

    printf("A teglalap kerulete: %d\n",kerulet);
    printf("A teglalap terulete: %d\n",terulet);

    return 0;
}