#include <stdio.h>
#define N 5

void tomb_kiir(int tomb[]) {
    for (int i = 0; i < N; i++)
    {   
        if (tomb[i] == tomb[N-1]) {
            printf("%d", tomb[N-1]);
        }else {
        printf("%d, ", tomb[i]);
        }
    }
    
}

int main() {
    int tomb[N] = {4, 7, 26, 8, 9};
    tomb_kiir(tomb);
}