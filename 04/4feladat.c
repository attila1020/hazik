#include <stdio.h>
#define N 10

int min_array(int tomb[]) {
    int min = tomb[0];
    for (int i = 1; i < N; i++)
    {
        if (tomb[i] < min) {
            min = tomb[i];
        }
    }
    return min;
}

int max_array(int tomb[]) {
    int max = tomb[0];
    for (int i = 1; i < N; i++)
    {
        if (tomb[i] > max) {
            max = tomb[i];
        }
    }
    return max;
}

int main() {

    int tomb[N] = {23, 32, 65, 78, 13, 432, 123, 257, 987, 7};
    printf("A tomb legkisebb eleme: %d\n",min_array(tomb));
    printf("A tomb legnagyobb eleme: %d\n", max_array(tomb));


    return 0;
}