#include <stdio.h>
#include <math.h>
#define N 10

void neg_to_poz_array(int tomb[]) {
    for (int i = 0; i < N; i++)
    {
        printf("%d ", abs(tomb[i]));
    }
}
void tomb_kiir(int tomb[]) {
    for (int i = 0; i < N; i++)
    {
        printf("%d ", tomb[i]);
    }
}

int main() {
    int tomb[N] = {-1, 6, -7, 8, -10, 7, -4, 8, -9, 10};
    tomb_kiir(tomb);
    puts("");
    neg_to_poz_array(tomb);
    return 0;
}