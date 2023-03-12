#include <stdio.h>
#define N 5

int rendezett(int tomb[]) {
    for (int i = 0; i < N-1; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if (tomb[i] > tomb[j]) return 0;
        }
    }
    return 1;
}
void tomb_kiir(int tomb[]) {
    for (int i = 0; i < N; i++)
    {
        printf("%d ", tomb[i]);
    }
}

int main() {
    int tomb1[N] = {1, 2, 5, 3, 9};
    int tomb2[N] = {1, 2, 3, 5, 9};

    tomb_kiir(tomb1);
    puts("");
    if (rendezett(tomb1)) {
        printf("A tomb rendezett\n");
    } else printf("A tomb nem rendezett\n");

    tomb_kiir(tomb2);
    puts("");
    if (rendezett(tomb2)) {
        printf("A tomb rendezett\n");
    } else printf("A tomb nem rendezett\n");
    return 0;
}